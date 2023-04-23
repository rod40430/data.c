// addword.c -- fprintf(), fscanf(), and rewind()를 사용한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
  FILE *fp;
  char words[MAX];

  if ((fp = fopen("wordy", "a+")) == NULL)
  {
    fprintf(stdout, "Can't open \" wrody \" 파일을 열 수 없습니다.\n");
    exit(EXIT_FAILURE);
  }

  puts("파일에 추가할 단어들을 입력하시오. 입력을 끝내려면");
  puts("라인의 시작 위치에서 # 키를 누르시오.");

  while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    fprintf(fp, "%s\n", words);

  puts("파일 내용 : ");
  rewind(fp); // 파일의 시작으로 돌아간다.

  while (fscanf(fp, "%s", words) == 1)
    puts(words);
  puts("종료");
  if (fclose(fp) != 0)
    fprintf(stderr, "파일을 닫는 데 에러가 발생했습니다.\n");

  return 0;
}
