// join_chk.c -- 두 문자열을 결합한다, 크기를 먼저 검사한다.
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char * st, int n);
int main(void)
{
  char flower[SIZE];
  char addon[] = "s smell like old shoes.";
  char bug[BUGSIZE];
  int available;

  puts("네가 가장 좋아하는 꽃이 뭐냐?");
  s_gets(flower, SIZE);
  if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
    strcat(flower, addon);
  puts(flower);
  puts("네가 가장 좋아하는 벌레는 뭐냐?");
  s_gets(bug, BUGSIZE);
  available = BUGSIZE - strlen(bug) - 1;
  strncat(bug, addon, available);
  puts(bug);

  return 0;
}

char * s_gets(char *st, int n)
{
  char * ret_val;
  int i = 0;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st[i] = '\0';
    else  // words[i] == '\0'이어야 한다.
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}