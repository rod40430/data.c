// r_drive.c -- rand1()과 srand1()을 테스트한다.
// s_and_r.c과 함께 컴파일하라
#include <stdio.h>
extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
  int count;
  unsigned seed;

  printf("종자값으로 사용할 값을 입력하시오.\n");
  while (scanf("%u", &seed) == 1)
    {
      srand1(seed);
      for (count = 0; count < 5; count++)
        printf("%d\n", rand1());
      printf("다음 종자값을 입력하시오(끝내려면 q):\n");
    }
  printf("종료\n");

  return 0;
}
