/* misuse.c -- 부정확하게 함수를 사용한다.*/
#include <stdio.h>
int imax();  // ANSI C 이전 형식의 함수 선언

int main(void)
{
  printf("(%d, %d)에서 큰 것은 %d\n",
    3, 5, imax(3));
  printf("(%d, %d)에서 큰 것은 %d\n",
    3, 5, imax(3.0, 5.0));

  return 0;
}

int imax(n, m)
int n, m;
{
  return (n > m ? n : m);
}