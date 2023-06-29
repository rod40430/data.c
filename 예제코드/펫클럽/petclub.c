// petclub.c -- 바이너리 검색 트리를 사용한다.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree *pt);
void droppet(Tree *pt);
void showpets(const Tree *pt);
void findpet(const Tree *pt);
void printitem(Item item);
void uppercase(char *str);
char *s_gets(char *st, int n);

int main(void)
{
  Tree pets;
  char choice;

  InitializeTree(&pets);
  
  while ((choice = menu()) != 'q')
    {
      switch (choice)
        {
          case 'a' : addpet(&pets);
            break;
          case 'l' : showpets(&pets);
            break;
          case 'f' : findpet(&pets);
            break;
          case 'n' : printf("현재 등록된 애완 동물은 %d마리입니다.\n", TreeItemCount(&pets));
            break;
          case 'd' : droppet(&pets);
            break;
          default : puts("메뉴 선택 에러");
        }
    }
  
  DeleteAll(&pets);
  puts("끝.");

  return 0;
}

char menu(void)
{
  int ch;

  puts("Nerfville pet club 회원 관리 프로그램");
  puts("원하는 선택에 해당하는 글자를 입력하시오 : ");
  puts("a) 회원 등록        l) 회원 목록 표시");
  puts("n) 회원 수 보고      f) 회원 여부 확인");
  puts("d) 회원 삭제        q) 프로그램 종료");

  while((ch = getchar()) != EOF)  // 입력 라인의 나머지를 폐기한다.
    {
      while(getchar() != '\n')
        continue;
    
      ch = tolower(ch);
    
      if (strchr("alfndq", ch) == NULL)
        puts("a, l, f, n, d, q 중에서 하나를 선택하시오 : ");
      else
        break;
    }

  if (ch == EOF)  // ch가 EOF이면 프로그램을 종료한다.
    ch = 'q';

  return ch;
}

void addpet(Tree *pt)
{
  Item temp;

  if (TreeIsFull(pt))
    puts("클럽에 빈 자리가 없습니다.");
  else
  {
    puts("애완 동물의 이름을 입력하시오 : ");
    s_gets(temp.petname, SLEN);
    puts("애완 동물의 종류를 입력하시오 : ");
    s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    uppercase(temp.petkind);
    AddItem(&temp, pt);
  }
}

void showpets(const Tree *pt)
{
  if (TreeIsEmpty(pt))
    puts("등록된 회원이 없습니다!");
  else
    Traverse(pt, printitem);
}

void printitem(Item item)
{
  printf("이름 : %-14s  종류 : %-14s\n", item.petname, item.petkind);
}

void findpet(const Tree *pt)
{
  Item temp;

  if (TreeIsEmpty(pt))
  {
    puts("등록된 회원이 없습니다!");
    return;  // 트리가 비어 있으면 함수를 종료한다.
  }

  puts("회원인지 확인할 애완 동물의 이름을 입력하시오 : ");
  s_gets(temp.petname, SLEN);
  puts("애완 동물의 종류를 입력하시오 : ");
  s_gets(temp.petkind, SLEN);
  uppercase(temp.petname);
  uppercase(temp.petkind);
  printf("이름 : %-14s  종류 : %-14s\n", temp.petname, temp.petkind);

  if (InTree(&temp, pt))
    printf("등록된 회원입니다.\n");
  else
    printf("등록된 회원이 아닙니다.\n");
}

void droppet(Tree *pt)
{
  Item temp;

  if (TreeIsEmpty(pt))
  {
    puts("등록된 회원이 없습니다!");
    return;  // 트리가 비어 있으면 함수를 종료한다.
  }

  puts("회원에서 삭제할 애완 동물의 이름을 입력하시오 : ");
  s_gets(temp.petname, SLEN);
  puts("애완 동물의 종류를 입력하시오 : ");
  s_gets(temp.petkind, SLEN);
  uppercase(temp.petname);
  uppercase(temp.petkind);
  printf("이름 : %-14s  종류 : %-14s\n", temp.petname, temp.petkind);

  if (DeleteItem(&temp, pt))
    printf("회원 등록부에서 삭제했습니다.\n");
  else
    printf("등록된 회원이 아닙니다.\n");
}

void uppercase(char *str)
{
  while (*str)
    {
      *str = toupper(*str);
      str++;
    }
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);

  if (ret_val)
  {
    find = strchr(st, '\n');  // 개행을 찾는다.

    if (find)  // 만약 주소가 NULL이 아니라면
      *find = '\0';  // 널 문자를 거기에 놓는다.
      
    else
      while (getchar() != '\n')
        continue;  // 행의 나머지를 처리한다.
  }

  return ret_val;
}
