// partb.c -- 프로그램의 나머지 부분
// parta.c와 함께 컴파일한다.
#include <stdio.h>

extern int count;

static int total = 0;
void accumulate(int k);

void accumulate(int k)
{
  static int subtotal = 0;

  if (k <= 0)
  {
    printf("루프 사이클 : %d\n", count);
    printf("소계 : %d; 합계 : %d\n", subtotal, total);
    subtotal = 0;
  }
  else
  {
    subtotal += k;
    total += k;
  }
}