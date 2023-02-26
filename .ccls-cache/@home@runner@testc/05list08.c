// sizeof.c -- sizeof 연산자를 사용한다
// C99의 %z 변경자를 사용한다 -- %zd가 지원되지 않는다면 %u나 %lu를 사용하라
#include <stdio.h>

int main(void)
{
  int n = 0;
  size_t intsize;

  intsize = sizeof(int);
  printf("n = %d, n은 %zd바이트이다; 모든 int형 값은 %zd바이트이다.\n",
    n, sizeof n, intsize);

  return 0;
}