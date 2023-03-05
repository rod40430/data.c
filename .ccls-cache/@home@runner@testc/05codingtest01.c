/*01 분수로 주어지는 시간을 시간 수와 분수로 변환하는 프로그램을 작성하라.
60을 나타내는 기호 상수를 만들기 위해 #define이나 const를 사용하라.
사용자가 반복적으로 값을 입력할 수 있도록 while 루프를 사용하고, 0또는 0보다 작은 값이 입력되면
루프를 끝낸다.*/
#include <stdio.h>

int main(void)
{
  const int TIME = 60;
  int h, min;

  printf("분수를 입력해주세요.(프로그램 종료는 0 또는 0이하의 수를 입력해주세요.) : ");
  scanf("%d", &min);

  while (min > 0)
    {
      h = min / TIME;
      min = min % TIME;
      printf("%d시간 %d분입니다.\n", h, min);
      printf("또 다른 분을 입력해주세요 : ");
      scanf("%d", &min);
    }
  printf("프로그램이 종료되었습니다.");

  return 0;
}