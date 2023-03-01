// 1. 모든 변수를 int형이라고 가정할 때, 다음 각 변수의 값은 얼마인가?
#include <stdio.h>

int main(void)
{
  int x, y;

  x = (2 + 3) * 6;
  printf("%d\n", x);
  x = (12 + 6) / 2 * 3;
  printf("%d\n", x);
  y = x = (2 + 3) / 4;
  printf("%d\n", y);
  y = 3 + 2 * (x = 7 / 2);
  printf("%d\n", y);

  return 0;
}