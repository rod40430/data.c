#include <stdio.h>

int main(void)
{
  int num1 = 1000;
  int num2 = 64;

  printf("%6d\n", num1);
  printf("%o\n", num2);
  printf("%2c\n", 'A');
  printf("%+.2f\n", 3.13);
  printf("%-7.5s", "hello");
  
  return 0;
}