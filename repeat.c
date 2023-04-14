// repeat.c -- 전달인자를 사용하는 main()
#include <stdio.h>
int main(int argc, char *argv[])
{
  int count;
  
  printf("명령행이 %d개의 전달인자를 사용한다 : \n", argc - 1);
  for (count = 1; count < argc; count++)
    printf("%d: %s\n", count, argv[count]);
  printf("\n");

  return 0;
}