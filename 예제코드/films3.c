// films3.c -- ADT 스타일의 링크드 리스트를 사용한다.
// list.h와 함께 컴파일하라
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // exit()를 위한 프로토타입
#include "cord.h"  // list와 Item을 정의한다

void showmovies(Item item);
char *s_gets(char *st, int n);

int main(void)
{
  List movies;
  Item temp;

  // 초기화
  InitializeList(&movies);
  if (ListIsFull(&movies))
  {
    fprintf(stderr, "사용할 수 있는 메모리가 없습니다! 안녕\n");
    exit(1);
  }

  // 입력과 저장
  puts("첫 번째 영화 타이틀을 입력하시오 : ");
  while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
    {
      puts("평가를 입력하시오(0점에서 10점까지) : ");
      scanf("%d", &temp.rating);
      while (getchar() != '\n')
        continue;
      if (AddItem(temp, &movies) == false)
      {
        fprintf(stderr, "메모리 할당에 문제 발생\n");
        break;
      }
      if (ListIsFull(&movies))
      {
        puts("리스트가 가득 찼습니다.");
        break;
      }
      puts("다음 영화 타이틀을 입력하시오 (끝내려면 빈 라인) : ");
    }

  // 출력
  if (ListIsEmpty(&movies))
    printf("입력된 데이터가 없습니다.");
  else
  {
    printf("영화들의 목록은 다음과 같습니다.\n");
    Traverse(&movies, showmovies);
  }
  printf("%d편의 영화를 입력했습니다.\n", ListItemCount(&movies));

  // 리스트 비우기
  EmptyTheList(&movies);
  printf("끝\n");
  
  return 0;
}

void showmovies(Item item)
{
  printf("영화 : %s  평가 : %d\n", item.title, item.rating);
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar () != '\n')
        continue;
  }

  return ret_val;
}
