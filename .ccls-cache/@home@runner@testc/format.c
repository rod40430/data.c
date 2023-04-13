// format.c -- 문자열을 포맷 저장한다.
#include <stdio.h>
#include <string.h>
#define MAX 7
char * s_gets(char * st, int n);

int main(void)
{
  char first[MAX] = {"hello\0"};
  printf("%lu  %lu", strlen(first), sizeof(first));
  
  return 0;
}

char * s_gets(char * st, int n)
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
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}