// hello.c -- 명령행 전달인자를 수로 변환한다.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, times;
  
  if (argc < 2 || (times = atoi(argv[i])) < 1)
    printf("사용법 : %s 양수값\n", argv[0]);
  else
    for (i = 0; i < times; i++)
      puts("안녕, 얼굴이 좋아 보이는데!");

  return 0;
}