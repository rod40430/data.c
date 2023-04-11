// test_fit.c -- 문자열을 단축시키는 함수를 테스트한다.
#include <stdio.h>
#include <string.h>  // 문자열 함수 프로토타입들이 들어 있다.
void fit(char *, unsigned int);

int main(void)
{
  char mesg[] = "Things should be as simple as possible,"
  " but not simpler";

  puts(mesg);
  fit(mesg, 38);
  puts(mesg);
  puts("문자열의 나머지 부분을 보자.");
  puts(mesg + 39);
  
  return 0;
}

void fit(char *string, unsigned int size)
{
  if (strlen(string) > size)
  {
    *(string + size) = '\0';
  }
}