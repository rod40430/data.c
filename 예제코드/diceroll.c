// diceroll.c -- 주사위 던지기 시뮬레이션
// mandydice.c와 함께 컴파일하라
#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>

int roll_count = 0;

static int rollem(int sides)
{
  int roll;

  roll = rand() %sides + 1;
  roll_count++;

  return roll;
}

int roll_n_dice(int dice, int sides)
{
  int d;
  int total = 0;
  if (sides < 2)
  {
    printf("면의 개수는 최소한 2가 되어야 한다.\n");
    return - 2;
  }
  else if (dice < 1)
  {
    printf("주사위의 개수는 최소한 1이 되어야 한다.\n");
    return -1;
  }

  for (d = 0; d < dice; d++)
    total += rollem(sides);

  return total;
}
