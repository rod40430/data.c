// 08 주행한 거리는 마일 단위로 묻고, 소비한 휘발유의 양은 갤런 단위로 묻는
// 프로그램을 작성하라. 갤런당 마일 수를 계산하여 소수점 아래 1자리까지 출력해야한다.
// 그 다음에, 1갤런은 약 3.785리터이고, 1마일은 약 1.609킬로미터라는 사실을 이용하여,
// 갤런당 마일 수를 유럽 스타일인 100킬로미터당 리터 수로 변환하여 그 결과를 소수점 아래 1자리까지
// 출력해야 한다. (미국 스타일은 거리당 연료 소비량으로 측정하고, 유럽스타일은 연료 소비량당 거리로
// 측정한다.) 이 두 변환 계수를 위해 기호 상수(const 또는 #define을 사용)를 사용하라.
#include <stdio.h>

int main(void)
{
  const float mile = 1.609;  // 1마일 = 1.609킬로미터
  const float gallon = 3.785;  // 1갤런 3.785리터
  float p_mile;
  float p_gallon;
  float mg, lt;

  printf("주행거리(마일) : ");
  scanf(" %f", &p_mile);
  printf("소비한 휘발유의 양(갤런) : ");
  scanf(" %f", &p_gallon);
  mg = p_mile / p_gallon;
  lt = 100 / mg * gallon / mile;
  printf("갤런당 마일 수 : %.1f 리터 : %.1f\n", mg, lt);

  return 0;
}