// reducto.c -- 파일을 2/3로 압축한다!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 5

int main(int argc, char* argv[])
{
  FILE* in, *out;
  int ch;
  char name[LEN];
  int count = 0;

  // 명령행 전달인자를 검사한다.
  if (argc < 2)
  {
    fprintf(stderr, "사용법 : %s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  // 입력을 설정한다.
  if ((in = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "\"%s\" 파일을 열 수 없다.\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  // 출력을 설정한다.
  strncpy(name, argv[1], LEN - 5);
  name[LEN - 5] = '\0';
  strcat(name, ".red");
  if ((out = fopen(name, "w")) == NULL)
  {
    fprintf(stderr, "출력 파일을 만들 수 없다.\n");
    exit(3);
  }
  // 데이터를 복사한다.
  while ((ch = getc(in)) != EOF)
    if (count++ % 3 == 0)
      putc(ch, out);
  // 파일들을 닫는다.
  if (fclose(in) != 0 || fclose(out) != 0)
    fprintf(stderr, "파일들을 닫는 데 에러가 발생했다.\n");

  return 0;
}
