// enum.c -- 열거된 상수들을 사용한다.
#include <stdio.h>
#include <string.h>  // strcmp(), strchr()를 사용하기 위해
#include <stdbool.h>  // C99기능

char* s_gets(char* st, int n);

enum spectrum {red, orange, yellow, green, blue, violet};
const char* colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

#define LEN 30

int main(void)
{
  char choice[LEN];
  enum spectrum color;
  bool color_is_found = false;

  puts("컬러를 입력하시오(끝내려면 빈 라인) : ");

  while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
    {
      for (color = red; color <= violet; color++)
        {
          if (strcmp(choice, colors[color]) == 0)
          {
            color_is_found = true;
            break;
          }
        }
      if (color_is_found)
        switch (color)
          {
            case red : puts("장미는 red");
              break;
            case orange : puts("양귀비는 orange");
              break;
            case yellow : puts("해바라기는 yellow");
              break;
            case green : puts("잔디는 green");
              break;
            case blue : puts("블루벨은 blue");
              break;
            case violet : puts("제비꽃은 violet");
              break;
          }
      else
        printf("%s 컬러는 잘 모르겠습니다.\n", choice);

      color_is_found = false;

      puts("다음 컬러를 입력하시오(끝내려면 빈 라인) : ");
    }
  puts("안녕!");

  return 0;
}

char* s_gets(char* st, int n)
{
  char* ret_val;
  char* find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');  // 개행을 찾는다.
    if (find)                 // 주소가 NULL이 아니면,
      *find = '\0';           // null 문자를 거기에 둔다.
  }
  else
  {
    while (getchar () != '\n')
      continue;               // 행의 나머지를 삭제
  }

  return ret_val;
}
