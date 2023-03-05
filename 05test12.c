// 12. 다음과 같은 일을 하는 (또는 다음과 같은 부작용을 일으키는) 문장을 작성하라.
// a. 변수 x를 10만큼 증가시킨다.
// b. 변수 x를 1만큼 증가시킨다.
// c. a와 b의 합을 2배로 하여 c에 대입한다.
// a에 b의 2배를 더해서, c에 대입한다.
#include <stdio.h>

int main(void)
{
  int x, a, b, c;
  x = a = b = c = 1;

  x += 10;
  printf("a. 변수 x를 10만큼 증가시킨다. %d\n", x);
  x++;
  printf("b. 변수 x를 1만큼 증가시킨다. %d\n", x);
  c = (a + b) * 2;
  printf("c. a와 b의 합을 2배로 하여 c에 대입한다. %d\n", c);
  c = a + (b * 2);
  printf("a에 b의 2배를 더해서, c에 대입한다. %d\n", c);

  return 0;
}