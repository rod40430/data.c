// tree.h -- 바이너리 검색 트리
// 이 트리는 항목이 중복되는 것을 허용하지 않는다.
#ifndef _TREE_H_
#define _TREE_H_

#include <stdbool.h>

// 원하는 형식으로 Item형을 정의한다.
typedef struct item
{
  char petname[20];
  char petkind[20];
} Item;

#define MAXITEMS 10

typedef struct trnode
{
  Item item;
  struct trnode *left;  // 왼쪽 하위 트리를 가리키는 포인터
  struct trnode *right;  // 오른쪽 하위 트리를 가리키는 포인터
} Trnode;

typedef struct tree
{
  Trnode *root;  // 트리의 루트를 가리키는 포인터
  int size;  // 트리에 들어 있는 항목의 수
} Tree;

// 함수 프로토타입

// 연산 : 트리가 비어 있는 상태로 초기화한다.
// 사전 조건 : ptree는 트리를 가리킨다.
// 사후 조건 : 트리가 비어 있는 상태로 초기화된다.
void InitializeTree(Tree *ptree);

// 연산 : 트리가 비어 있는지 확인한다.
// 사전 조건 : ptree는 트리를 가리킨다
// 사후 조건 : 트리가 비어 있으면 true를 가리킨다.
// 그렇지 않으면 false를 리턴한다.
bool TreeIsEmpty(const Tree *ptree);

// 연산 : 트리가 가득 차 있는지 확인한다.
// 사전 조건 : ptree는 트리를 가리킨다
// 사후 조건 : 트리가 가득 차 있으면 true를 리턴한다.
// 그렇지 않으면 false를 리턴한다.
bool TreeIsFull(const Tree *ptree);

// 연산 : 트리에 얼마나 많은 항목들이 있는지 확인한다.
// 사전 조건 : ptree는 트리를 가리킨다.
// 사후 조건 : 트리에 들어 있는 항목의 수를 리턴한다.
int TreeItemCount(const Tree *ptree);

// 연산 : 트리에 항목을 추가한다.
// 사전 조건 : pi는 추가할 항목의 주소다.
// ptree는 미리 초기화된 트리를 가리킨다.
// 사후 조건 : 가능하다면, 항목을 트리에 추가하고
// true를 리턴한다.
// 그렇지 않으면 false를 리턴한다.
bool AddItem(const Item *pi, Tree *ptree);

// 연산 : 트리에 항목을 찾는다.
// 사전 조건 : pi는 항목을 가리킨다.
// ptree는 미리 초기화된 트리를 가리킨다.
// 사후 조건 : 항목이 트리에 들어 있으면 true를 리턴한다.
// 그렇지 않으면 false를 리턴한다.
bool InTree(const Item *pi, const Tree *ptree);

// 연산 : 트리에서 항목을 제거한다.
// 사전 조건 : pi는 제거할 항목의 주소다.
// ptree는 미리 초기화된 트리를 가리킨다.
// 사후 조건 : 가능하다면, 트리에서 항목을 제거하고
// true를 리턴한다.
// 그렇지 않으면 false를 리턴한다.
bool DeleteItem(const Item *pi, Tree *ptree);

// 연산 : 트리에 있는 각 항목에 함수를 적용한다.
// 사전 조건 : ptree는 트리를 가리킨다.
// pfun은 Item을 전달인자로 사용하고
// 리턴값이 없는 함수를 가리킨다.
// 사후 조건 : pfun이 가리키는 함수는
// 트리에 있는 각 항목마다 한 번씩 수행된다.
void Traverse(const Tree *ptree, void (*pfun)(Item item));

// 연산 : 트리에 있는 모든 것을 제거한다.
// 사전 조건 : ptree는 미리 초기화된 트리를 가리킨다.
// 사후 조건 : 트리가 비어 있는 상태로 설정된다.
void DeleteAll(Tree *ptree);

#endif
