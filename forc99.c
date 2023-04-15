// forc99.c -- c99의 새로운 블록 규칙
#include <stdio.h>
int main(void)
{
  int n = 8;

  printf("    최초의 n = %d, %p\n", n, &n);
  for (int n = 1; n < 3; n++)
    printf("  loop 1 : n = %d, %p\n", n, &n);
  printf("loop 실행 후, n = %d\n", n);
  for (int n = 1; n < 3; n++)
    {
      printf("  loop 2 인덱스 n = %d, %p\n", n, &n);
      int n = 6;
      printf("  loop 2 : n = %d, %p\n", n, &n);
      n++;
    }
  printf("loop 2 실행 후, n = %d, %p\n", n, &n);

  return 0;
}