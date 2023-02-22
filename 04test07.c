#include <stdio.h>

int main(void)
{
  unsigned long num1 = 15;
  int num2 = 0x8a;
  float num3 = 2.33E+02;
  double num4 = 232.346;
  
  printf("%15lu\n", num1);
  printf("%4d\n", num2);
  printf("%-12f\n", num3);
  printf("%+10f\n", num4);
  printf("%-8s\n", "문자열");
  
  return 0;
}