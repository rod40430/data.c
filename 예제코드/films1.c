// films1.c -- 구조체의 배열을 사용한다.
#include <stdio.h>
#include <string.h>

#define TSIZE 45
#define FMAX 5

struct film
{
  char title[TSIZE];
  int rating;
};

char * s_gets(char *st, int n);

int main(void)
{
  struct film movies[FMAX];
  int i = 0;
  int j;

  puts("첫 번째 영화 타이틀을 입력하시오 : ");
  while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\n')
    {
      puts("평가를 입력하시오 (0장에서 10장까지) : ");
      scanf("%d", &movies[i++].rating);
      while (getchar() != '\n')
        continue;
      puts("다음 영화 타이틀을 입력하시오(끝내려면 0) : ");
    }
  if (i == 0)
    printf("입력된 데이터가 없습니다.\n");
  else
    printf("영화들의 목록은 다음과 같습니다.\n");

  for (j = 0; j < i; j++)
    printf("영화 : %s 평가 : %d\n", movies[j].title, movies[j].rating);
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
