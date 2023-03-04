// 8. 다음 프로그램은 무엇을 출력하는가?
#include <stdio.h>
#define TEN 10
int main(void)
{
  int n = 0;
  while (n++ < TEN)  //  n비교 후 바로 +1을 진행한다.
    printf("%5d", n);  //  {}없을 경우 세미클론이 찍힌 문장까지만 while문 범주에 들어간다.
  printf("\n");

  return 0;
}