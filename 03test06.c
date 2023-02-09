#include <stdio.h>

int main(void)
{
  int quart;
  double water;

  printf("물을 쿼드 단위로 입력해주세요 (1쿼드 : 950그램) :");
  scanf("%d", &quart);
  water = (3.0e-23) * quart;
  printf("%d의 물분자 게수는 : %e\n", quart, water);
  
  return 0;
}