// names_st.c -- names_st를 사용하는 함수들을 정의한다.
#include <stdio.h>
#include "names_st.h"  // 헤더 파일을 포함한다.

// 함수 정의
void get_names(names * pn)
{
  printf("이름(first name)을 입력하시오 : ");
  s_gets(pn->first, SLEN);

  printf("성(last name)을 입력하시오 : ");
  s_gets(pn->last, SLEN);
}

void show_names(const names * pn)
{
  printf("%s %s", pn->first, pn->last);
}

char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');  // 개행을 찾는다.
    if (find)                 // 주소가 NULL이 아니면,
      *find = '\0';           // 널문자를 거기 놓는다.
    else
      while (getchar() != '\n')
        continue;             // 행의 나머지를 처리한다.
  }

  return ret_val;
}
