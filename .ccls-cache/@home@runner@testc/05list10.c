// add_one.c -- 증가 연산자 : 전위 모드와 후위 모드
#include <stdio.h>

int main(void)
{
  int ultra = 0;
  int super = 0;

  while (super < 5)
    {
      super++;
      ++ultra;
      printf("super = %d, ultra = %d\n", super, ultra);
    }

  return 0;
}