// p_and_s.c -- 포인터와 문자열
#include <stdio.h>
int main(void)
{
  const char * mesg = "섣불리 판단하지 말라";
  const char * copy;

  copy = mesg;
  printf("%s\n", copy);
  printf("mesg = %s; &mesg = %p; 값 = %p\n", mesg, &mesg, mesg);
  printf("copy = %s; &copy = %p; 값 = %p\n", copy, &copy, copy);

  return 0;
}