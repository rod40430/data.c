#include <stdio.h>

int main(void)
{
  printf("int형의 크기: %zd바이트\n", sizeof(int));
  printf("char형의 크기: %zd바이트\n", sizeof(char));
  printf("Long형의 크기: %zd바이트\n", sizeof(long));
  printf("Long Long형의 크기: %zd바이트\n", sizeof(long long));
  printf("float형의 크기: %zd바이트\n", sizeof(float));
  printf("double형의 크기: %zd바이트\n", sizeof(double));
  printf("Long double형의 크기: %zd바이트\n", sizeof(long double));
  
  return 0;
}