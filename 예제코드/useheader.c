// useheader.c -- names_st 구조체를 사용한다
#include <stdio.h>
#include "names_st.h"

// names_st.c와 함께 컴파일하고 링크한다.

int main(void)
{
  names candidate;

  get_names(&candidate);
  printf("환영합니다, ");
  show_names(&candidate);
  printf(" 씨. 오늘은 마음껏 즐기십시오!\n");

  return 0;
}
