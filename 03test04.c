#include <stdio.h>

int main(void)
{
  float f_num1;

  printf("부동소수점 수를 입력하시오: ");
  scanf("%f", &f_num1);
  printf("\n고정소수점 표기: %f", f_num1);
  printf("\n지수 표기: %e", f_num1);
  printf("\np 표기: %a", f_num1);
  
  return 0;
}