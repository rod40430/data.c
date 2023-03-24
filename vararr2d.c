// varrarr2d.c -- VLA을 사용하는 함수
#include <stdio.h>
#define ROWS 3
#define COLS 4
int sum2d(int rows, int cols, int ar[rows][cols]);
int main(void)
{
  int i, j;
  int rs = 3;
  int cs = 10;
  int junk[ROWS][COLS] = {
  {2,4,6,8},
  {3,5,7,9},
  {12,10,8,6}
  };

  int morejunk[ROWS - 1][COLS + 2] = {
  {20,30,40,50,60,70},
  {5,6,7,8,9,10}
  };

  int varr[rs][cs];  // VLA

  for (i = 0; i < rs; i++)
    {
      for (j = 0; j < cs; j++)
        {
          varr[i][j] = i * j + j;
        }
    }

  printf("3x5 배열\n");
  printf("모든 원소들의 합계 = %d\n",
    sum2d(ROWS, COLS, junk));

  printf("2x6 배열\n");
  printf("모든 원소들의 합계 = %d\n",
    sum2d(ROWS - 1, COLS + 2, morejunk));

  printf("3x10 배열\n");
  printf("모든 원소들의 합계 = %d\n",
    sum2d(rs, cs, varr));

  return 0;
}

// VLA 매개변수를 사용하는 함수
int sum2d(int rows, int cols, int ar[rows][cols])
{
  int r;
  int c;
  int tot = 0;

  for (r = 0; r < rows; r++)
    {
      for (c = 0; c < cols; c++)
        {
          tot += ar[r][c];
        }
    }
  return tot;
}