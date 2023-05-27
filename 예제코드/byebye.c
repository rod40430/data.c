// byebye.c -- atexit() 함수를 사용한다.
#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main(void)
{
  int n;

  atexit(sign_off);  // sign_off 함수를 등록한다.
  puts("정수를 입력하시오 : ");

  if (scanf("%d", &n) != 1)
  {
    puts("정수가 아닙니다!");
    atexit(too_bad);  // too_bad() 함수를 등록한다.
    exit(EXIT_FAILURE);
  }

  printf("%d : %s\n", n, (n % 2 == 0) ? "짝수" : "홀수");
  
  return 0;
}

void sign_off(void)
{
  puts("프로그램을 종료합니다.");
  puts("SeeSaw 소프트웨어!");
}

void too_bad(void)
{
  puts("SeeSaw 소프트웨어는 진심어린 애도를 표합니다.");
  puts("프로그램이 정상적으로 동작하지 않은 데 대해");
}
