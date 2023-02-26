// post_pre.c -- 후위 모드와 전위 모드
#include <stdio.h>

int main(void)
{
  int a = 1;
  int b = 1;
  int a_post, pre_b;

  a_post = a++;  // 대입 단계 동안의 a++값
  pre_b = ++b;  // 대입 단꼐 동안의 ++b 값
  printf("a   a_post  b   pre_b\n");
  printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

  return 0;
}