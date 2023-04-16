// parta.c -- 여러 가지 저장 클래스를 사용한다.
// partb.c와 함께 컴파일한다.
#include <stdio.h>
#include "partb.c"
void report_count();
void accumulate(int k);
int count = 0;

int main(void)
{
  int value;
  register int i;

  printf("양의 정수를 하나 입력하시오 (끝내려면 0) : ");
  while (scanf("%d", &value) == 1 && value > 0)
    {
      ++count;
      for (i = value; i >= 0; i--)
        accumulate(i);
      printf("양의 정수를 하나 입력하시오 (끝내려면 0) : ");
    }
  report_count();

  return 0;
}

void report_count()
{
  printf("루프가 실행된 횟수 : %d\n", count);
}