// 03 하나의 부동소수점 수를 읽고, 그것을 먼저 소수점 표기로 출력하고, 이어서
// 지수 표기로 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
  float num;

  printf("부동소수점을 입력해주세요 : ");
  scanf(" %f", &num);
  printf("\n입력된 것은 %.3f 또는 %.3e입니다.\n", num, num);

  return 0;
}