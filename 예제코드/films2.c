// films2.c -- 구조체들의 링크드 리스트를 사용한다.
#include <stdio.h>
#include <stdlib.h>  // malloc()을 사용하기 위해
#include <string.h>  // strcpy()을 사용하기 위해

// 타이틀을 저장하는 배열의 크기
#define TSIZE 45

typedef struct 
{
  char title[TSIZE];
  int rating;
  struct film *next;  // 리스트에 있는 다음 구조체를 가르킨다.
} film;

char * s_gets(char *st, int n);

int main(void)
{
  film *head = NULL;
  film *prev, *current;
  char input[TSIZE];
  
  // 영화 정보를 입력받아 저장한다.
  puts("첫 번째 영화 타이틀을 입력하시오 : ");
  while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
    {
      current = (film *) malloc(sizeof(film));
      // printf("current : %p\n", current);
      if (head == NULL)
      {
        head = current;
        // printf("head : %p\n", head);
      }
      else
        prev->next = current;
      // printf("prev->next : %p\n", prev->next);
      
      current->next = NULL;
      strcpy(current->title, input);
      puts("평가를 입력하시오 (0점에서 10점까지) : ");
      scanf("%d", &current->rating);
      while (getchar() != '\n')
        continue;
      prev = current;
      // printf("prev : %p\n", prev);
      puts("다음 영화 타이틀을 입력하시오(끝내려면 빈 라인) : ");
    }
  
  // 영화들의 목록을 보여 준다.
  if (head == 0)
    printf("입력된 데이터가 없습니다.\n");
  else
    printf("영화들의 목록은 다음과 같습니다.\n");

  current = head;

  printf("head : %p\n", head);
  while (current != NULL)
    {
      printf("영화 : %s  평가 : %d\n", current->title, current->rating);
      printf("현재 주소 : %p  다음 주소 : %p\n", current, current->next);
      current = current->next;
    }

  // 프로그램이 종료할 때 할당된 메모리를 해제한다.
  current = head;

  while (current != NULL)
    {
      free(current);
      current = current->next;
    }
  printf("끝!\n");

  return 0;
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');  // 개행을 찾는다.
    if (find)  // 주소가 NULL이 아니라면
      *find = '\0';  // 널 문자를 거기에 넣는다.
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}
