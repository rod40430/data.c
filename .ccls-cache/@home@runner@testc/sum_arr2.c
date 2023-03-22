/* sum_arr2.c -- 배열의 원소들의 합을 구한다. */
#include <stdio.h>
#define SIZE 10

int sump(int *start, int *end);

int main(void)
{
  int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  long answer;

  answer = sump(marbles, marbles + SIZE);
  printf("구슬의 전체 개수는 %ld개입니다.\n", answer);

  return 0;
}

// 포인터 계산을 사용한다.
int sump(int *start, int *end)
{
  int total = 0;

  while (start < end)
    {
      total += *start;  // total에 값을 더한다
      start++;  // 포인터를 증가시켜 다음 원소를 가르킨다.
    }

  return total;
}