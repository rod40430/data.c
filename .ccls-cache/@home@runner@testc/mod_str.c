// mod_str.c -- 문자열을 변경한다.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
  char line[LIMIT];
  char * find;

  puts("한 라인을 입력하시오 :");
  fgets(line, LIMIT, stdin);
  find = strchr(line, '\n');  //개행을 찾는다.
  if (find)  // 주소가 널이 아니라면
    * find = '\0';  //널 문자를 거기에 넣는다.
  ToUpper(line);
  puts(line);
  printf("그 라인에는 구두점 문자가 %d개 들어 있습니다.\n", PunctCount(line));

  return 0;
}

void ToUpper(char * str)
{
  while (*str)
    {
      *str = toupper(*str);
      str++;
    }
}

int PunctCount(const char * str)
{
  int ct = 0;
  while (*str)
    {
      if (ispunct(*str))
        ct++;
      str++;
    }
  return ct;
}