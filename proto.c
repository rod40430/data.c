/* proto.c -- 함수 프로토타입을 사용한다.*/
#include <stdio.h>
int imax(int, int); // 프로토타입

int main(void)
{
  printf("(%d, %d)에서 큰 것은 %d\n",
    3, 5, imax(3, 5));
  printf("(%d, %d)에서 큰 것은 %d\n",
    3, 5, imax(3.0, 5.0));

  return 0;
}

int imax(int n, int m)
{
  return (n > m ? n : m);
}