// preproc.c -- 간단한 전처리기 예제
#include <stdio.h>
#define TWO 2  /*원한다면 이렇게 주석을 사용할 수 있다.*/
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde"  /* 백슬래시가 정의를 다음 라인으로*/
                      /* 이어지게 만든다.*/
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x);

int main(void)
{
  int x = TWO;

  PX;
  x = FOUR;

  PX;
  printf("%s\n", OW);
  printf("TWO : OW\n");

  return 0;
}
