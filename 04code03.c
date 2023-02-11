// praise2.c
// 사용하는 시스템이 %zd를 인식하지 못한다면
// %u 또는 %lu를 사용한다.

#include <stdio.h>
#include <string.h>  // strlen() 프로토타입을 제공한다.
#define PRAISE "You are an extraordinary being."
int main(void)
{
  char name[40];

  printf("실례지만 성함이 어떻게 되시는지?\n");
  scanf("%s", name);
  printf("반갑습니다, %s씨. %s\n", name, PRAISE);
  printf("이름은 %zd글자인데 메모리 셀 %zd를 차지합니다.\n", strlen(name), sizeof name);
  printf("감탄문은 %zd글자인데", strlen(PRAISE));
  printf("메모리 셀 %zd개를 차지합니다.\n", sizeof PRAISE);
  
  return 0;
}