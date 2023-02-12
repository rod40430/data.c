// printout.c -- 변환 지정자를 사용한다.
#include <stdio.h>
#define PI 3.141593
int main(void)
{
  int number = 7;
  float pies = 12.75;
  int cost = 7800;

  printf("%d명의 경쟁자가 %f판의 딸기파이를 먹었다.\n", number, pies);
  printf("The value of pi is %f.\n", PI);
  printf("잘 가시라! 그대는 내가 소유하기에 과분하여라,\n");
  printf("%c%d\n", '$', 2 * cost);
  
  return 0;
}