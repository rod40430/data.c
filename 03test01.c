#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  int num1 = INT_MAX;
  int num2 = INT_MIN;
  float num3 = FLT_MAX;
  float num4 = FLT_MIN;

  printf("오버플로 and 언더플로\n");
  printf("오버플로 : %d\n 언더플로 : %d\n", num1 + 1, num2 - 1);
  printf("오버플로 : %f\n 언더플로 : %f\n", num3 + 1, num4 - 1);
  
  
  return 0;
}