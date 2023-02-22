#include <stdio.h>

int main(void)
{
  int num1 = 0x8A;
  float num2 = 232.346;
  double num3 = 2.33E+02;
  char ch[] = "왼쪽으로 정렬된 문자열";
  
  printf("%4x\n", num1);
  printf("%10.3f\n", num2);
  printf("%12.2e\n", num3);
  printf("%-30s\n", ch);

  return 0;
}