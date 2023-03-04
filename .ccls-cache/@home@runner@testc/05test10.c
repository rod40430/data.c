// 10. 다음 각 부분이 프로그램의 일부라면 출력 결과는?
#include <stdio.h>

int main(void)
{
  // a.
  int x = 0;
  while (++x < 3)
    printf("%4d", x);
  printf("\n\n\n");
  
  // b.
  x = 100;

  while (x++ < 103)
    printf("%4d\n", x);
    printf("%4d\n", x);
  printf("\n\n\n");
  
  // c.
  char ch = 's';

  while (ch < 'w')
    {
      printf("%c ", ch);
      ch++;
    }
  printf("%c\n", ch);

  return 0;
}