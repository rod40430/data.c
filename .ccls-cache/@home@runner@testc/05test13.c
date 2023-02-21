// addemup.c -- 다섯 가지 문장
#include <stdio.h>
int main(void)
{
  int count, sum;

  count = 0;
  sum = 0;
  while (count++ < 20)
    {
      sum = sum + count;
      printf("합 = %d\n", sum);
    }

  return 0;
}