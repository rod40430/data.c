// predef.c -- 미리 정의된 식별자
#include <stdio.h>

void why_me(void);

int main(void)
{
  printf("파일 이름 : %s.\n", __FILE__);
  printf("처리 날짜 : %s.\n", __DATE__);
  printf("처리 시각 : %s.\n", __TIME__);
  // printf("버전 : %ld.\n", __STDC_VERSION__);  // C99 또는 C11을 확인한다.
  printf("현재 라인 번호는 %d.\n", __LINE__);
  printf("현재 함수의 이름은 %s\n", __func__);
  why_me();

  return 0;
}

void why_me(void)
{
  printf("현재 함수의 이름은 %s\n", __func__);
  printf("현재 라인의 번호는 %d.\n", __LINE__);
}
