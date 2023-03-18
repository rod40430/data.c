/* menuette.c -- 메뉴 테크닉*/
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
  int choice;
  void count(void);

  while( (choice = get_choice()) != 'q')
    {
      switch (choice)
        {
          case 'a' :  printf("쌀 때 사서 비쌀 떄 파시오.\n");
                      break;
          case 'b' :  putchar('\a');
                      break;
          case 'c' :  count();
                      break;
          default  :  printf("프로그램 에러!\n");
                      break;
        }
    }
  printf("안녕!\n");

  return 0;
}

void count(void)
{
  int n, i;

  printf("몇까지 카운트할까요? 정수 하나를 입력하시오 : \n");
  n = get_int();
  for (i = 1; i <= n; i++)
    {
      printf("%d\n", i);
    }
  while (getchar() != '\n')
    {
      continue;
    }
}

char get_choice(void)
{
  int ch;

  printf("a, b, c, q 중에서 하나를 선택하시오 : \n");
  printf("a. 조언              b. 경고\n");
  printf("c. 카운트            q. 종료\n");
  ch = get_first();

  while ( (ch < 'a' || ch > 'c') && ch != 'q')
    {
      printf("a, b, c, q 중에서 하나를 선택해야 합니다.\n");
      ch = get_first();
    }

  return ch;
}

char get_first(void)
{
  int ch;

  ch = getchar();
  while (getchar() != '\n')
    {
      continue;
    }

  return ch;
}

int get_int(void)
{
  int input;
  char ch;

  while (scanf("%d", &input) != 1)
    {
      while ((ch = getchar()) != '\n')
        {
          putchar(ch);
        }
      printf(" : 정수가 아닙니다.\n25, -178, 3과 같은");
      printf("정수값을 입력하시오 : ");
    }

  return input;
}