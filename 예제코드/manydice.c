// manydice.c -- 주사위 여러개 던지기
// diceroll.c와 함께 컴파일하라
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
  int dice, roll;
  int sides;
  int status;

  srand((unsigned int) time(0));

  printf("주사위 하나의 면 수를 입력하시오(끝내려면 0).\n");
  while (scanf("%d", &sides) == 1 && sides > 0)
    {
      printf("던질 주사위가 몇 개 입니까?\n");
      if ((status = scanf("%d", &dice)) != 1)
      {
        if (status == EOF)
          break;
      
        else
        {
          printf("정수를 입력해야 합니다.");
          printf("다시 합시다.\n");
          while (getchar() != '\n')
            continue;
          printf("주사위 하나의 면수를 입력하시오(끝내려면 0).\n");
          continue;
        }
      }
      roll = roll_n_dice(dice, sides);
      printf("%d면 주사위 %d개를 던져 얻은 합계가 %d입니다.\n",
        sides, dice, roll);
      printf("주사위 하나의 면 수를 입력하시오(끝내려면 0). \n");
    }
  printf("rollem() 함수는 %d번 호출되었습니다.\n", roll_count);

  printf("행운을 빕니다!");

  return 0;
}
