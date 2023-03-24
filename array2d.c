// array2d.c -- 2차원 배열을 처리하는 함수
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);  // 이름들을 생략할 수 있다.
int sum2d(int (*ar)[COLS], int rows);  // 또 다른 프로토타입 신택스
int main(void)
{
  int junk[ROWS][COLS] = {
  {2,4,6,8},
  {3,5,7,9},
  {12,10,8,6}
  };

  sum_rows(junk, ROWS);
  sum_cols(junk, ROWS);
  printf("모든 원소들의 합계 = %d\n", sum2d(junk, ROWS));

  return 0;
}

void sum_rows(int ar[][COLS], int rows)
{
  int r;
  int c;
  int tot;

  for (r = 0; r < rows; r++)
    {
      tot = 0;
      for (c = 0; c < COLS; c++)
        {
          tot += ar[r][c];
        }
      printf("%d행 : 소게 = %d\n", r, tot);
    }
}

void sum_cols(int ar[][COLS], int rows)
{
  int r;
  int c;
  int tot;

  for (c = 0; c < COLS; c++)
    {
      tot = 0;
      for (r = 0; r < rows; r++)
        {
          tot += ar[r][c];
        }
      printf("%d열 : 소게 = %d\n", c, tot);
    }
}

int sum2d(int ar[][COLS], int rows)
{
  int r;
  int c;
  int tot = 0;

  for (r = 0; r < rows; r++)
    {
      for (c = 0; c < COLS; c++)
        {
          tot += ar[r][c];
        }
    }
  
  return tot;
}