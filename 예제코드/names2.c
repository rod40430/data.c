// names2.c -- 구조체 자체를 전달하고 리턴한다.
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct namect
{
  char fname[NLEN];
  char lname[NLEN];
  int letters;
};


struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char* s_gets(char* st, int n);

int main(void)
{
  struct namect person;

  person = getinfo();
  person = makeinfo(person);
  showinfo(person);
  
  return 0;
}

struct namect getinfo(void)
{
  struct namect temp;
  
  printf("이름을 입력하시오 : \n");
  s_gets(temp.fname, NLEN);
  printf("성씨를 입력하시오 : \n");
  s_gets(temp.lname, NLEN);

  return temp;
}

struct namect makeinfo(struct namect info)
{
  info.letters = strlen(info.fname) + strlen(info.lname);

  return info;
}

void showinfo(struct namect info)
{
  printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
  info.fname, info.lname, info.letters);
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
