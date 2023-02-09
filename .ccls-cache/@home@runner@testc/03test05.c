#include <stdio.h>

int main(void)
{
  int age;
  double year;
  
  printf("나이를 입력하시오 : ");
  scanf("%d", &age);

  year = (3.156e+7) * age;

  printf("당신의 나이를 초로 환산하면 : %e초입니다", year);
  
  
  return 0;
}