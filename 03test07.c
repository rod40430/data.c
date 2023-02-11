#include <stdio.h>

int main(void)
{
  float inch = 2.54;
  int cm;

  printf("자신의 키를 입력해주세요 : ");
  scanf("%d", &cm);
  printf("당신의 키를 인치로 변환한다면 : %f", cm / inch);
  
  return 0;
}