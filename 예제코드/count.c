// count.c -- 표준 입출력을 사용한다.
#include <stdio.h>

#include <stdlib.h>
int main(int argc, char *argv[])
{
  int ch;
  FILE *fp;
  unsigned long count = 0;
  if (argc != 2)
  {
    printf("사용법 : %s filenama\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  if ((fp = fopen(argv[1], "r")) == NULL)
  {
    printf("%s 파일을 열 수 없습니다.\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  while ((ch = getc(fp)) != EOF)
    {
      putc(ch, stdout);
      count++;
    }
  fclose(fp);
  printf("%s 파일에는 %ld개의 문자가 들어 있습니다.\n", argv[1], count++);

  return 0;
}
