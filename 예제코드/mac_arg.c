// mac_arg.c -- 전달인자를 사용하는 매크로
#include <stdio.h>

#define SQUARE(X) X*X
#define PR(X) printf("결과는 %d이다.\n", X)

int main(void)
{
  int x = 5;
  int z;

  printf("x = %d\n", x);
  z = SQUARE(x);
  printf("SQUARE(x)의 평가 ");
  PR(z);
  
  z = SQUARE(2);
  printf("SQUARE(2)의 평가 ");
  PR(z);

  printf("SQUARE(x + 2)의 평가 ");
  PR(SQUARE(x + 2));

  printf("100 / SQUARE(2)의 평가 ");
  PR(100 / SQUARE(2));

  printf("x는 %d이다.\n", x);
  
  printf("SQUARE(++x)의 평가");
  PR(SQUARE(++x));
  
  printf("증가 후, x는 %x이다.\n", x);

  return 0;
}
