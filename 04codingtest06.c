// 06 먼저 이름을 요청하고, 이어서 다시 성을 요청한다.
// 입력된 성과 이름을 한 라인에 출력하고, 그 다음 라인에는 성과 이름을 구성하는 글자 수를,
// 다음과 같이, 성과 이름의 끝 글자에 맞추어 출력하라.
#include <stdio.h>
#include <string.h>

int main(void)
{
  char sung[10];
  char name[20];

  printf("이름을 입력해주세요 :");
  scanf(" %s", name);
  printf("성을 입력해주세요 :");
  scanf(" %s", sung);

  int i_sung = strlen(sung);
  int i_name = strlen(name);

  printf("%s %s\n", sung, name);
  printf("%*d %*d\n", i_sung, i_sung, i_name, i_name);
  
  printf("%s %s\n", sung, name);
  printf("%-*d %-*d\n", i_sung, i_sung, i_name, i_name);

  return 0;
}