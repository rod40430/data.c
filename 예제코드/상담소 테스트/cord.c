// queue.c -- Queue형을 구현한다.
#include <stdio.h>
#include <stdlib.h>
#include "cord.h"

// 지역 함수들
static void CopyToNode(Item item, Node *pn);
static void CopyToItem(Node *pn, Item *pi);

void InitializeQueue(Queue *pq)
{
  pq->front = pq->rear = NULL;
  pq->items = 0;
}

bool QueueIsFull(const Queue *pq)
{
  return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const Queue *pq)
{
  return pq->items == 0;
}

int QueueItemCount(const Queue *pq)
{
  return pq->items;
}

bool EnQueue(Item item, Queue *pq)
{
  Node *pnew;

  if (QueueIsFull(pq))  // 큐가 가득차있다면 거짓을 리턴
    return false;
  pnew = (Node*) malloc(sizeof(Node));
  if (pnew == NULL)  // 만약 pnew가 메모리 생성에 실패하였을 경우
  {
    fprintf(stderr, "메모리를 할당할 수 없습니다!=\n");
    exit(1);
  }
  CopyToNode(item, pnew);
  pnew->next = NULL;
  if (QueueIsEmpty(pq))  //만약 item에 아무것도 없다면 항목을 앞 front에 넣는다.
    pq->front = pnew;
  else
    pq->rear->next = pnew;  // 항목을 반대쪽 끝(rear)에 넣는다.
  pq->rear = pnew;  // 반대쪽 끝(rear)의 위치를 보관한다.
  pq->items++;  // 항목 수를 증가시킨다.

  return true;
}

bool DeQueue(Item *pitem, Queue *pq)
{
  Node *pt;

  if (QueueIsEmpty(pq))
    return false;
  CopyToItem(pq->front, pitem);
  pt = pq->front;
  pq->front = pq->front->next;
  free(pt);
  pq->items--;
  if (pq->items == 0)
    pq->rear = NULL;

  return true;
}

// 큐를 비운다
void EmptyTheQueue(Queue *pq)
{
  Item dummy;
  while (!QueueIsEmpty(pq))
    DeQueue(&dummy, pq);
}

// 지역 함수들
static void CopyToNode(Item item, Node *pn)
{
  pn->item = item;
}

static void CopyToItem(Node *pn, Item *pi)
{
  *pi = pn->item;
}
