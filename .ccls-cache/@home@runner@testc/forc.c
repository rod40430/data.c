// hiding.c -- 블록에 있는 변수들
#include <stdio.h>
int main(void)
{
  int x = 30;  // 최초의 x

  printf("외부 블록에 있는 x : %d at %p\n", x, &x);
  {
    int x = 77;  // 새로운 x, 최초의 x를 가린다.
    printf("내부 블록에 있는 x : %d at %p\n", x, &x);
  }
  printf("외부 블록에 있는 x : %d at %p\n", x, &x);
  while (x++ < 33)  // 최초의 x
    {
      int x = 100;  // 새로운 x, 최초의 x를 가린다.
      x++;
      printf("while 루프에 있는 x : %d at %p\n", x, &x);
    }
  printf("외부 블록에 있는 x : %d at %p\n", x, &x);

  return 0;
}