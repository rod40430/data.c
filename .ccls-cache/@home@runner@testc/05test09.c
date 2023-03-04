// 9. 문제 8.의 플그램이 문자 a부터 g까지 출력하도록 수정하라.
#include <stdio.h>
#define TEN 'g'
int main(void)
{
  char n = 'a';
  while (n <= TEN)
    {
      printf("%5c", n++);
    }
  printf("\n끝\n");
  

  return 0;
}