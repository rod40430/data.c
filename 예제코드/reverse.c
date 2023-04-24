// reverse.c -- 파일을 뒤에서부터 거꾸로 표시한다.
#include <stdio.h>
#include <stdlib.h>
// DOS 텍스트 파일에서 파일의 끝 표지
#define CNTL_Z '\032'
#define SLEN 81

int main(void)
{
  char file[SLEN];
  char ch;
  FILE *fp;
  long count, last;

  puts("처리할 파일의 이름을 입력하시오 : ");
  scanf("%80s", file);

  if ((fp = fopen(file, "rb")) == NULL)
  {
    printf("%s 파일을 열 수 없다.\n", file);
    exit(EXIT_FAILURE);
  }

  fseek(fp, 0L, SEEK_END);  // 파일의 끝으로 간다.
  last = ftell(fp);
  for (count = 1L; count <= last; count++)
    {
      fseek(fp, -count, SEEK_END);
      ch = getc(fp);
      if (ch != CNTL_Z && ch != '\r')
        putchar(ch);
    }
  putchar('\n');
  fclose(fp);

  return 0;
}
