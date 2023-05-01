// book.c -- 관리하는 도서가 하나뿐인 도서 목록
#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

char* s_gets(char* st, int n);

struct book 
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void)
{
  struct book library;  // library를 book형 변수로 선언한다.

  printf("도서 제목을 입력하시오.\n");
  s_gets(library.title, MAXTITL);  // 책 제목(title) 부분에 접근한다.
  printf("저자명을 입력하시오.\n");
  s_gets(library.author, MAXAUTL);
  printf("정가를 입력하시오.\n");
  scanf("%f", &library.value);
  printf("%s by %s :     $%.2f\n",
    library.title, library.author, library.value);
  printf("%s : \" %s \" ($%.2f)\n",
    library.author, library.title, library.value);
  printf("종료.\n");

  return 0;
}

char* s_gets(char* st, int n)
{
  char* ret_val;
  char* find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');  // 개행을 찾는다.
    if (find)                 // 주소가 NULL이 아니면,
      *find = '\0';           // null 문자를 거기에 둔다.
  }
  else
  {
    while (getchar () != '\n')
      continue;               // 행의 나머지를 삭제
  }

  return ret_val;
}
