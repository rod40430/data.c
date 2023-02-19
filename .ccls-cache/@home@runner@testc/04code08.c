// floats.c -- 몇 가지 부동소수점형 포맷 지정자의 사용
#include <stdio.h>

int main(void)
{
  const double RENT = 3835.99; // const로 지정한 실수
  printf("*%f*\n", RENT);
  printf("*%e*\n", RENT);
  printf("*%4.2f*\n", RENT);
  printf("*%3.1f*\n", RENT);
  printf("*%10.3f*\n", RENT);
  printf("*%10.3E*\n", RENT);
  printf("*%+4.2f*\n", RENT);
  printf("*%010.2f*\n", RENT);
    
  return 0;
}