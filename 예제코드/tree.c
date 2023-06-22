// tree.c -- 트리를 지원하는 함수들
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

// 지역 데이터형
typedef struct pair
{
  Trnode *parent;
  Trnode *child;
} Pair;

// 지역 함수들의 프로토타입
static Trnode *MakeNode(const Item *pi);
static bool ToLeft(const Item *i1, const Item *i2);
static bool ToRight(const Item *i1, const Item *i2);
static void AddNode(Trnode *new_node, Trnode *root);
static void InOrder(const Trnode *root, void(*pfun)(Item item));
static Pair SeekItem(const Item *pi, const Tree *ptree);
static void DeleteNode(Trnode **ptr);
static void DeleteAllNodes(Trnode *ptr);

// 함수 정의
