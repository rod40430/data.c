// ifdef.c -- 조건부 컴파일을 사용한다.
#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
  int i;
  int total = 0;

  for (i = 1; i <= LIMIT; i++)
    {
      total += 2 * i * i + 1;
      #ifdef JUST_CHECKING
        printf("i = %d, 누게 = %d\n", i, total);
      #endif
    }

  printf("총계 = %d\n", total);

  return 0;
}
