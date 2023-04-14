// sort_str.c -- 문자열들을 읽고 정령한다.
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt(char * strings[], int num);
char * s_gets(char * st, int n);

int main(void)
{
  char input[LIM][SIZE];
  char * ptstr[LIM];
  int ct = 0;
  int k;

  printf("최대 %d라인까지 입력하면 그것들을 정렬하겠습니다.\n", LIM);
  printf("입력을 멈추려면 라인 시작에서 Enter 키를 누르시오.\n");
  while (ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0')
    {
      ptstr[ct] = input[ct];
      ct++;
    }
  stsrt(ptstr, ct);
  puts("\n문자열들이 정렬된 결과 : \n");
  for (k = 0; k < ct; k++)
    puts(ptstr[k]);


  return 0;
}
void stsrt(char * strings[], int num)
{
  char *temp;
  int top, seek;

  for (top = 0; top < num - 1; top++)
    for (seek = top + 1; seek < num; seek++)
      if (strcmp(strings[top], strings[seek]) > 0)
      {
        temp = strings[top];
        strings[top] = strings[seek];
        strings[seek] = temp;
        puts("1");
      }
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