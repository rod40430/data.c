/*  01 먼저 이름을 요청하고, 이어서 다시 성을 요청한다. 그리고 나서 성, 이름
  순으로 출력하는 프로그램을 작성하라.  */
#include <stdio.h>

int main(void)
{
  char name1[10];
  char name2[10];

  printf("이름을 입력해주세요 : ");
  scanf(" %s", name2);
  printf("\n성을 입력해주세요 : ");
  scanf(" %s", name1);

  printf("\n성 : %s\n이름 : %s", name1, name2);

  return 0;
}