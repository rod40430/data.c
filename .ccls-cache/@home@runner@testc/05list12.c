// bottles.c -- 카운트 다운
#include <stdio.h>
#define MAX 100

int main(void)
{
  int count = MAX + 1;

  while (--count > 0)
    {
      printf("%d 병의 샘물이 냉장고에 있었네,"
        "%d 병이! \n", count, count);
      printf("그 중 한 병을 꺼내 마셨지,\n");
      printf("%d 병의 샘물이 아직 남았네!\n\n", count - 1);
    }

  return 0;
}