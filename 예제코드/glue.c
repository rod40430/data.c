// glue.c -- ## 연산자를 사용한다.
#include <stdio.h>

#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

int main(void)
{
  int XNAME(1) = 14;  // 다음과 같이 된다; int x1 = 14;
  int XNAME(2) = 20;  // 다음과 같이 된다; int x2 = 20
  int x3 = 30;

  PRINT_XN(1);  // 다음과 같이 된다; printf("x1 = %d\n", x1);
  PRINT_XN(2);  // 다음과 같이 된다; printf("x2 = %d\n", x2);
  PRINT_XN(3);  // 다음과 같이 된다; printf("x3 = %d\n", x3);
  
  return 0;
}
