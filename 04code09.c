// flags.c == 몇 가지 포맷 변경자 플래그를 보여 준다
#include <stdio.h>
int main(void)
{
  printf("%x %X %#x\n", 31, 31, 31);
  printf("**%d**% d**% d**\n", 42, 42, -42);
  printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
  
  return 0;
}