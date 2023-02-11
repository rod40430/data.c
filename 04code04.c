// pizza.c -- 피자 집에서 쓰는 용어로 상수를 정의한다
#include <stdio.h>
#define PI 3.14159
int main(void)
{
  float area, circum, radius;

  printf("피자의 반지름이 얼마냐?\n");
  scanf("%f", &radius);
  area = PI * radius * radius;
  circum = 2.0 * PI * radius;
  printf("피자의 기본 매개변수는 다음과 같다:\n");
  printf("circumference = %1.2f, area = %1.2f\n", circum, area);
  
  return 0;
}