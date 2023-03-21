/* swap3.c -- 포인터를 사용하여 맞교환을 바르게 수행한다.*/
#include <stdio.h>
void interchange(int *u, int *v);

int main(void)
{
  int x = 5;
  int y = 10;

  printf("교환 전 x = %d, y = %d\n", x, y);
  interchange(&x, &y);  // 함수에 주소를 전달한다.
  printf("교환 후 x = %d, y = %d", x, y);

  return 0;
}

void interchange(int *u, int *v)
{
  int temp;

  temp = *u;  // temp는 u가 가리키는 값을 얻는다.
  *u = *v;
  *v = temp;
}