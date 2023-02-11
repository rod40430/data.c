// praise1.c -- 몇 가지 유형의 문자열들을 사용한다.
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
  char name[40];

  printf("실례지만 성함이 어떻게 되시는지?\n");
  scanf("%s", name);
  printf("반갑습니다, %s씨. %s\n", name, PRAISE);
  
  return 0;
}