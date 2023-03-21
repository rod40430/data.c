/* day_mon2.c -- 컴파일러가 원소 개수를 카운트한다. */
#include <stdio.h>

int main(void)
{
  const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
  int index;

  for (index = 0; index < sizeof days / sizeof days[0]; index++)
    {
      printf("%2d월 : 날짜 수 %2d\n", index + 1, days[index]);
    }
  
  return 0;
}