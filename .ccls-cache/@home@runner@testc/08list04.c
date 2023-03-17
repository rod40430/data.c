/* guess.c -- 수 맞추기 프로그램 (비효율적이고 잘못되었다.)*/
#include <stdio.h>

int main(void)
{
  int guess = 1;

  printf("1에서 100까지 범위에 있는 한 정수를 생각하시오.\n");
  printf("내가 추측하지요. 내 추측이 맞으면 y로 응답하고,\n");
  printf("내 추측이 틀리면 n으로 응답하시오.\n");
  printf("당신이 생각한 수가 %d입니까?\n", guess);
  while (getchar() != 'y')
    {
      printf("그러면 %d입니까?\n", ++guess);
    }
  printf("그것 봐요, 내가 맞출 수 있다고 했잖아요!\n");
  
  return 0;
}