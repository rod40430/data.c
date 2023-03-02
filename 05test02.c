// 2. 모든 변수를 int형이라고 가정할 때, 다음 각 변수의 값은 얼마인가?
#include <stdio.h>

int main(void)
{
  int x;

  x = (int) 3.8 + 3.3;
  printf("%d\n", x);
  x = (2 + 3) * 10.5;
  printf("%d\n", x);
  x = 3 / 5 * 22.0;
  printf("%d\n", x);
  x = 22.0 * 3 / 5;
  printf("%d\n", x);

  return 0;
}