// 04 인치 단위의 키와, 이름을 요청하여 그 정보를 다음과 같은 포맷으로 출력하는
// ㅍ로그램을 작성하라
#include <stdio.h>

int main(void)
{
  float num;
  char name[20];

  printf("키와 이름을 입력해주세요:\n");
  printf("키 : ");
  scanf(" %f", &num);
  printf("이름 : ");
  scanf(" %s", name);

  printf("\n%s씨, 당신의 키는 %.2f미터입니다.", name, num / 100);

  return 0;
}