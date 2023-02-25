// golf.c -- 골프 토너먼트 점수판
#include <stdio.h>

int main(void)
{
  int jane, tarzan, cheeta;

  cheeta = tarzan = jane = 68;
  printf("              치타     타잔     제인\n");
  printf("1라운드 점수 %4d %8d %8d\n", cheeta, tarzan, jane);

  return 0;
}