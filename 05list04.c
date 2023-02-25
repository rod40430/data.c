// squares.c -- 처음 20까지의 제곱표를 만든다.
#include <stdio.h>

int main(void)
{
  int num = 1;

  while (num < 21)
    {
      printf("%4d %6d\n", num, num * num);
      num += 1;
    }

  return 0;
}