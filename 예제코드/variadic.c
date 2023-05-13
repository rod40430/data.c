// variadic.c -- 가변 전달인자 매크로
// 컴파일러가 C99를 지원해야 한다.
#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf("메세지" #X " : " __VA_ARGS__);

int main(void)
{
  double x = 48;
  double y;

  y = sqrt(x);

  PR(1, "x = %g\n", x);
  PR(2, "x = %.2f, y = %.4f\n", x, y);

  return 0;
}
