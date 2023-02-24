// 07 double형 변수를 1.0/3.0으로 설정하고. float형 변수를 1.0/3.0으로 설정하는 프로그램을 작성하라.
// 그 결과를 각각 세 번씩 출력한다. 첫 번째, 소수점 아래 4자리까지 출력한다. 두 번째, 소수점 아래 12자리
// 까지 출력한다. 세 번째, 소수점 아래 16자리까지 출력한다. 프로그램에 float.h를 포함시켜, FLT_DIG와
// DBL_DIG의 값을 출력하라. 출력된 1.0/3.0의 값들이 이들 값과 같은가?
#include <stdio.h>
#include <float.h>

int main(void)
{
  double num1 = 1.0/3.0;
  float num2 = 1.0/3.0;

  printf("double : %d float : %d\n", DBL_DIG, FLT_DIG);
  printf("double : %.4f float : %.4f\n", num1, num2);
  printf("double : %.12f float : %.12f\n", num1, num2);
  printf("double : %.16f float : %.16f\n", num1, num2);
  
  return 0;
}