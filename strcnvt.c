// strcnvt.c -- strtol()을 사용한다.
#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char * st, int n);

int main(void)
{
  char number[30];
  char * end;
  long value;

  puts("하나의 수를 입력하시오(끝내려면 빈 라인 입력) : ");
  while (s_gets(number, LIM) && number[0] != '\0')
    {
      value = strtol(number, &end, 10);
      printf("값 : %ld, %s 앞에서 끝났다 (%d)\n", value, end, *end);
      value = strtol(number, &end, 16);
      printf("값 : %ld, %s 앞에서 끝났다 (%d)\n", value, end, *end);
      puts("다음 수를 입력하시오 : ");
    }
  puts("안녕!");

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