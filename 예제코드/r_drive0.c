// r_drive0.c -- rand0() 함수를 테스트한다.
// rand0.c과 함께 컴파일러하라
#include <stdio.h>
extern int rand0(void);

int main(void)
{
  int count;

  for (count = 0; count < 5; count++)
    printf("%d\n", rand0());

  return 0;
}
