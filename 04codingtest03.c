/*  02 이름을 요청하고, 그 이름을 다음과 같은 포맷으로 출력하는 프로그램을 작성하라.  */
#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];

  printf("이름을 입력해주세요 : ");
  scanf(" %s", name);

  printf("\n\"%s\"", name);
  printf("\n\"%20s\"", name);
  printf("\n\"%-20s\"", name);
  printf("\n\"%*s\"", strlen(name) + 3, name);

  return 0;
}