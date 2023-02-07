#include <stdio.h>

int main(void)
{
  float salary;

  printf("\a원하는 월급 액수를 입력하시오:");
  printf(" $______\b\b\b\b\b\b");
  scanf("%f", &salary);
  printf("\n\t 월$%.2f이면 연봉으로 $%.2f입니다.", salary, salary * 12);
  printf("\r와우!\n");
  
  return 0;
}