// assert.c -- assert()를 사용한다.
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(void)
{
  double x, y, z;

  puts("두 수를 입력하시오 (끝내려면 0 0) : ");

  while (scanf("%lf %lf", &x, &y) == 2)
    {
      z = x * x - y * y;  // -가 아니라 +여야 한다.
      assert(z >= 0);
      printf("제곱근 : %f\n", sqrt(z));
      puts("다음 두 수를 입력하시오 : ");
    }

  puts("종료");

  return 0;
}
