// divide.c -- 정수형 나눗셈과 부동소수점형 나눗셈
#include <stdio.h>

int main(void)
{
  printf("정수형 나눗셈 :       5/4      %d\n", 5/4);
  printf("정수형 나눗셈 :       6/3      %d\n", 6/3);
  printf("정수형 나눗셈 :       7/4      %d\n", 7/4);
  printf("부동소수점형 나눗셈 : 7./4.    %1.2f\n", 7./4.);
  printf("혼합된 나눗셈 :       7/4      %1.2f\n", 7./4);

  return 0;
}