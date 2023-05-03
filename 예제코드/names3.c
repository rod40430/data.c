// names3.c -- 포인터와 malloc()을 사용한다.
#include <stdio.h>
#include <string.h>  // strcpy(), strlen()을 사용하기 위해
#include <stdlib.h>  // malloc(), free()를 사용하기 위해

#define SLEN 81

struct namect
{
  char* fname;
  char* lname;
  int letters;
};


void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void clenup(struct namect *);  // 사용이 끝난 메모리를 해제한다.
char* s_gets(char* st, int n);

int main(void)
{
  struct namect person;

  getinfo(&person);
  makeinfo(&person);
  showinfo(&person);
  clenup(&person);
  
  return 0;
}

void getinfo(struct namect* pst)
{
  char temp[SLEN];
  printf("이름을 입력하시오 : \n");
  s_gets(temp, SLEN);
  // 이름을 저장할 메모리를 할당한다.
  pst->fname = (char*) malloc(strlen(temp) + 1);
  // 할당된 메모리에 이름을 복사한다.
  strcpy(pst->fname, temp);
  printf("성씨를 입력하시오 : \n");
  s_gets(temp, SLEN);
  pst->lname = (char*) malloc(strlen(temp) + 1);
  strcpy(pst->lname, temp);
}

void makeinfo(struct namect* pst)
{
  pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect* pst)
{
  printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
  pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect* pst)
{
  free(pst->fname);
  free(pst->lname);
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
