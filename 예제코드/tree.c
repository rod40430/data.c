// tree.c -- 트리를 지원하는 함수들
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 지역 데이터형
typedef struct pair {
  Trnode *parent;
  Trnode *child;
} Pair;

// 지역 함수들의 프로토타입
static Trnode *MakeNode(const Item *pi);
static bool ToLeft(const Item *i1, const Item *i2);
static bool ToRight(const Item *i1, const Item *i2);
static void AddNode(Trnode *new_node, Trnode *root);
static void InOrder(const Trnode *root, void (*pfun)(Item item));
static Pair SeekItem(const Item *pi, const Tree *ptree);
static void DeleteNode(Trnode **ptr);
static void DeleteAllNodes(Trnode *ptr);

// 함수 정의
void InitializeTree(Tree *ptree) {
  ptree->root = NULL;
  ptree->size = 0;
}

bool TreeIsEmpty(const Tree *ptree) {
  if (ptree->root == NULL)
    return true;
  else
    return false;
}

bool TreeIsFull(const Tree *ptree)
{
  if (ptree->size == MAXITEMS)
    return true;
  else
    return false;
}

int TreeItemCount(const Tree *ptree)
{
  return ptree->size;
}

bool AddItem(const Item *pi, Tree *ptree)
{
  Trnode *new_node;

  if (TreeIsFull(ptree))
  {
    fprintf(stderr, "트리가 가득 차 있습니다.\n");
    return false;  // 일찍 리턴한다.
  }
  
  if (SeekItem(pi, ptree).child != NULL)
  {
    fprintf(stderr, "중복되는 항목은 추가할 수 없습니다.\n");
    return false;  // 일찍 리턴한다.
  }
  
  new_node = MakeNode(pi);  // 새로운 노드를 가리킨다.

  if (new_node == NULL)
  {
    fprintf(stderr, "새로운 노드를 만들 수 없습니다.\n");
    return false;  // 일찍 리턴한다.
  }

  // 성공적으로 새로운 노드를 만들었다.
  ptree->size++;

  if (ptree->root == NULL)  // 경우 1 : 트리가 비어 있다.
    ptree->root = new_node;  // 새로운 노드가 트리의 루트가 된다.
  else  // 경우 2 : 트리가 비어 있지 않다.
    AddNode(new_node, ptree->root);  // 트리에 노드를 추가한다.
  
  return true;
}

bool InTree(const Item *pi, const Tree *ptree)
{
  return (SeekItem(pi, ptree).child == NULL) ? false : true;
}

bool DeleteItem(const Item *pi, Tree *ptree)
{
  Pair look;

  look = SeekItem(pi, ptree);

  if (look.parent == NULL)
    return false;

  if (look.parent == NULL)  // root 항목을 삭제한다.
    DeleteNode(&ptree->root);
  else if (look.parent->left == look.child)
    DeleteNode(&look.parent->left);
  else
    DeleteNode(&look.parent->right);

  ptree->size--;

  return true;
}

void Traverse(const Tree *ptree, void (*pfun)(Item item))
{
  if (ptree != NULL)
    InOrder(ptree->root, pfun);
}

void DeleteAll(Tree *ptree)
{
  if (ptree != NULL)
    DeleteAllNodes(ptree->root);
  ptree->root = NULL;
  ptree->size = 0;
}

// 지역 함수
static void InOrder(const Trnode *root, void (*pfun)(Item item))
{
  if (root != NULL)
  {
    InOrder(root->left, pfun);
    (*pfun)(root->item);
    InOrder(root->right, pfun);
  }
}

static void DeleteAllNodes(Trnode *root)
{
  Trnode *pright;

  if (root != NULL)
  {
    pright = root->right;
    DeleteAllNodes(root->left);
    free(root);
    DeleteAllNodes(pright);
  }
}

static void AddNode(Trnode *new_node, Trnode *root)
{
  if (ToLeft(&new_node->item, &root->item))
  {
    if (root->left == NULL)  // 비어 있는 하위 트리이면
      root->left = new_node;  // 여기에 노드를 추가한다.
    else
      AddNode(new_node, root->left);  // 하위 트리로 내려간다.
  }
  else if (ToRight(&new_node->item, &root->item))
  {
    if (root->right == NULL)
      root->right = new_node;
    else
      AddNode(new_node, root->right);
  }
  else
  {
    fprintf(stderr, "AddNode()에서 위치 선정 에러\n");
    exit(1);
  }
}

static bool ToLeft(const Item *i1, const Item *i2)
{
  int comp1;

  if ((comp1 = strcmp(i1->petname, i2->petname) < 0))
    return true;
  else if (comp1 == 0 && strcmp(i1->petkind, i2->petkind) < 0)
    return true;
  else
    return false;
}

static bool ToRight(const Item *i1, const Item *i2)
{
  int comp1;

  if ((comp1 = strcmp(i1->petname, i2->petname) < 0))
    return true;
  else if (comp1 == 0 && strcmp(i1->petkind, i2->petkind) < 0)
    return true;
  else
    return false;
}

static Trnode *MakeNode(const Item *pi)
{
  Trnode *new_node;

  new_node = (Trnode *) malloc(sizeof(Trnode));

  if (new_node != NULL)
  {
    new_node->item = *pi;
    new_node->left = NULL;
    new_node->right = NULL;
  }

  return new_node;
}

static Pair SeekItem(const Item *pi, const Tree *ptree)
{
  Pair look;
  look.parent = NULL;
  look.child = ptree->root;

  if (look.child == NULL)
    return look;  // 일찍 리턴한다.

  while (look.child != NULL)
    {
      if (ToLeft(pi, &(look.child->item)))
      {
        look.parent = look.child;
        look.child = look.child->right;
      }
      else if (ToRight(pi, &(look.child->item)))
      {
        look.parent = look.child;
        look.child = look.child->right;
      }
      else  // 왼쪽이나 오른쪽으로 가지 않는다면 같은 것이다.
        break;  // look.child는 그 항목이 들어 있는 노드의 주소다.
    }

  return look;  // 성공하면 리턴한다.
}

static void DeleteNode(Trnode **ptr)
// ptr은 부모 노드에 멤버로 저장되어 있는 목표 노드를 가리키는 주소다.
{
  Trnode *temp;

  puts((*ptr)->item.petname);
  if ((*ptr)->left == NULL)
  {
    temp = *ptr;
    *ptr = (*ptr)->right;
    free(temp);
  }
  else if ((*ptr)->right == NULL)
  {
    temp = *ptr;
    *ptr = (*ptr)->left;
    free(temp);
  }
  else  // 삭제되는 노드가 자식이 둘이면
  {
    //  오른쪽 하위 트리를 다시 연결할 자리를 찾는다.
    for (temp = (*ptr)->left; temp->right != NULL; temp = temp->right)
      continue;
    temp->right = (*ptr)->right;
    temp = *ptr;
    *ptr = (*ptr)->left;
    free(temp);
  }
}
