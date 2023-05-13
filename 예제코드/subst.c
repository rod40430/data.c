// subst.c -- 문자열로 대체한다.
#include <stdio.h>
#define PSQR(X) printf(#X"의 제곱은 %d이다.\n", ((X) * (X)));

int main(void)
{
  int y = 5;

  PSQR(y);
  PSQR(2 + 4);

  
  return 0;
}
