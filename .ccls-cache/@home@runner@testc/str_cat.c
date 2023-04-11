// str_cat.c -- 두 문자열을 결합한다.
#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets (char * st, int n);
int main(void)
{
  char flower[SIZE];
  char addon[] = "s smell like old shoes.";

  puts("네가 가장 좋아하는 꽃이 뭐냐?");
  if(s_gets(flower, SIZE))
  {
    strcat(flower, addon);
    puts(flower);
    puts(addon);
  }
  else
  {
    puts("End of file encountered!");
  }
  puts("안녕");

  return 0;
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  int i = 0;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st[i] = '\0';
    else // 반드시 words[i] == '\0' 이어야 한다.
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}