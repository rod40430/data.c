// append.c -- 파일들을 다른 한 파일에 덧붙인다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE* source, FILE* dest);
char* s_gets(char* st, int n);

int main(void)
{
  FILE* fa, * fs;  // fa는 덧붙일 파일, fs는 소스 파일
  int files = 0;  // 덧붙일 파일들의 개수
  char file_app[SLEN];  // 덧붙일 파일 이름
  char file_src[SLEN];  // 소스 파일의 이름
  int ch;

  puts("목적 파일의 이름을 입력하시오 : ");
  s_gets(file_app, SLEN);
  if ((fa = fopen(file_app, "a+")) == NULL)
  {
    fprintf(stderr, "파일을 열 수 없습니다.%s \n", file_app);
    exit(EXIT_FAILURE);
  }
  if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
  {
    fputs("출력 버퍼를 생성할 수 없습니다.\n", stderr);
    exit(EXIT_FAILURE);
  }
  puts("첫 번쨰 소스 파일의 이름을 입력하시오(끝내려면 빈 라인) : ");
  while (s_gets(file_src, SLEN) && file_src[0] != '\0');
  {
    if (strcmp(file_src, file_app) == 0)
      fputs("자기 자신에게는 덧붙일 수 없습니다.\n", stderr);
      
    else if ((fs = fopen(file_src, "r")) == NULL)
      fprintf(stderr, "파일을 열 수 없습니다.%s \n", file_src);
      
    else
    {
      if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
      {
        fputs("입력 버퍼를 생성할 수 없습니다.\n", stderr);
        continue;
      }
      append(fs, fa);
      if (ferror(fs) != 0)
        fprintf(stderr, "파일을 읽는 데 에러가 발생했습니다.%s.\n", file_src);
      if (ferror(fa) != 0)
        fprintf(stderr, "파일을 읽는 데 에러가 발생했습니다.%s.\n", file_app);
      fclose(fs);
      files++;
      printf("%s 파일의 내용을 덧붙였습니다.\n", file_src);
      puts("다음 소스 파일의 이름을 입력하시오.(끝내려면 빈 라인) : ");
    }
  }
  printf("종료. %d개의 파일을 덧붙였습니다.\n", files);
  rewind(fs);
  printf("%s 내용 : \n", file_app);
  while ((ch = getc(fa)) != EOF)
    putchar(ch);
  puts("종료 나타내기.");
  fclose(fa);

  return 0;
}

void append(FILE* source, FILE* dest)
{
  size_t bytes;
  static char temp[BUFSIZE];  // 한번만 더 할당한다.

  while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    fwrite(temp, sizeof(char), bytes, dest);
}

char* s_gets(char* st, int n)
{
  char* ret_val;
  char* find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');  // 개행을 찾는다.
    if (find)  // 주소가 NULL이 아니면,
      *find = '\0';  // NULL문자를 거기에 놓는다.
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}
