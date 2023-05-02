// names1.c -- 구조체를 가리키는 포인터를 사용한다.
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct namect
{
  char fname[NLEN];
  char lname[NLEN];
  int letters;
};


void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
char* s_gets(char* st, int n);

int main(void)
{
  struct namect person;

  getinfo(&person);
  makeinfo(&person);
  showinfo(&person);
  
  return 0;
}

void getinfo(struct namect* pst)
{
  printf("이름을 입력하시오 : \n");
  s_gets(pst -> fname, NLEN);
  printf("성씨를 입력하시오 : \n");
  s_gets(pst -> lname, NLEN);
}

void makeinfo(struct namect* pst)
{
  pst -> letters = strlen(pst -> fname) + strlen(pst -> lname);
}

void showinfo(const struct namect* pst)
{
  printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
  pst->fname, pst->lname, pst->letters);
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
