// queue.h -- 큐를 사용하기 위한 인터페이스
#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdbool.h>

// Item형을 사용자가 원하는 형식으로 정의하라
// 예를 들면,
typedef int Item;
// 또는 typedef struct item { long arrive; int processtime;} Item;

#define MAXQUEUE 10

typedef struct node
{
  Item item;
  struct node *next;
} Node;

typedef struct queue
{
  Node *front;  // 큐의 앞쪽(front)을 가리키는 포인터
  Node *rear;  // 큐의 반대쪽 끝(rear)을 가리키는 포인터
  int items;  // 큐에 들어 있는 항목의 수
} Queue;

// 연산 : 큐를 초기화한다.
// 사전 조건 : pq는 큐를 가리킨다.
// 사후 조건 : 큐가 빈 상태로 초기화된다.
void InitializeQueue(Queue *pq);

// 연산 : 큐가 가득 차 있는지 확인한다.
// 사전 조건 : pq는 미리 초기화된 큐를 가리킨다.
// 사후 조건 : 큐가 가득 차 있으면 true를 리턴한다.
// 그렇지 않으면 false를 리턴한다.
bool QueueIsFull(const Queue *pq);

// 연산 : 큐가 비어 있는지 확인한다.
// 사전 조건 : pq는 미리 초기화된 큐를 가리킨다.
// 사후 조건 : 큐가 비어 있으면 true를 리턴한다.
// 그렇지 않으면 false를 리턴한다.
bool QueueIsEmpty(const Queue *pq);

// 연산 : 큐에 얼마나 많은 항목들이 있는지 확인한다.
// 사전 조건 : pq는 미리 초기화된 큐를 가리킨다.
// 사후 조건 : 큐에 들어 있는 항목의 수를 리턴한다.
int QueueItemCount(const Queue *pq);

// 연산 : 큐의 꼬리에 항목을 추가한다.
// 사전 조건 : pq는 미리 초기화된 큐를 가리킨다.
// 항목이 큐의 반대쪽 끝(rear)에 추가될 것이다.
// 사후 조건 : 큐가 비어 있지 않으면, 항목을 큐의 반대쪽 끝(rear)에
// 추가하고, 함수는 true를 리턴한다.
// 그렇지 않으면, 큐는 변경되지 않고
// 함수가 false를 리턴한다
bool EnQueue(Item item, Queue *pq);

// 연산 : 큐의 앞(front)에서 항목을 제거한다.
// 사전 조건 : pq는 미리 초기화된 큐를 가리킨다.
// 사후 조건 : 큐가 비어 있지 않으면, 큐의 앞(front)에 있는
// 항목이 *pitem에 복사된 후 큐에서 제거된다.
// 함수는 true를 리턴한다.
// 이 동작이 큐를 비운다면, 큐는 빈 상태로
// 다시 설정된다. 큐가 처음부터 비어 있다면,
// 큐는 변경되지 않고 함수가 false를 리턴한다.
bool DeQueue(Item *pitem, Queue *pq);

// 연산 : 큐를 비운다.
// 사전 조건 : pq는 미리 초기화된 큐를 가리킨다.
// 사후 조건 : 큐가 비어 있는 상태로 설정된다.
void EmptyTheQueue(Queue *pq);

#endif
