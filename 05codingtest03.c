/*03 사용자에게 날 수를 입력하도록 요구하여, 그 값을 주 수와 날 수로 변환하는 프로그램을 작성하라.
예를 들어, 18일은 2주, 4일로 변환되어야 한다.
결과를 다음과 같은 포맷으로 출력하라.
  18일은 2주, 4일입니다.
사용자가 반복적으로 날짜를 입력할 수 있도록 while 루프를 사용하고, 사용자가 0이나 -20과 같은,
양수가 아닌 값을 입력하면 루프를 끝낸다.*/
#include <stdio.h>

int main(void)
{
  const int SHIFT = 7;  //  일주일
  int day, week, user;

  printf("일수를 입력해주세요 : ");
  scanf("%d", &user);

  while (user > 0)
    {
      week = user / SHIFT;
      day = user % SHIFT;
      printf("%d일은 %d주, %d일입니다.\n", user, week, day);
      printf("다시 일수를 입력해주세요 (종료는 0 또는 그 이하의 수입니다.) : ");
      scanf("%d", &user);
    }
  printf("프로그램을 종료합니다.\n");
}