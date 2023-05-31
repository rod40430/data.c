// varargs.c -- 개수가 가변적인 전달인자들을 사용한다.
#include <stdio.h>
#include <stdarg.h>

double sum(int, ...);

int main(void)
{
  double s, t;

  s = sum(3, 1.1, 2.5, 13.3);
  t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);

  printf("sum(3, 1.1, 2.5, 13.3)의"
    " 리턴값 :                   %g\n", s);
  printf("sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1)의"
    " 리턴값 :    %g\n", t);

  return 0;
}

double sum(int lim, ...)
{
  va_list ap;  // 전달인자들을 담을 객체를 선언한다.
  double tot = 0;
  int i;

  va_start(ap, lim);  // ap를 전달인자 리스트로 초기화한다.
  for (i = 0; i < lim; i++)
    tot += va_arg(ap, double);  // 전달인자 리스트에 있는 각 항목에 접근한다
  va_end(ap);  // 흔적을 깨끗이 지운다.

  return tot;
}
