// 11. 다음 프로그램은 무엇을 출력하는가?
#define MESG "COMPUTER BYTES DOG"
#include <stdio.h>
int main(void)
{
  int n = 0;

  while (n < 5)
    printf("%s\n", MESG);  //  와일문은 요기까지이기 떄문에 무한반복 출력이 일어난다.
    n++;
  printf("이제 끝이다.\n");

  return 0;
}