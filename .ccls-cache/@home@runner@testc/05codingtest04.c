/*04  사용자에게 키를 센티미터 단위로 입력하도록 요구하여 센티미터와, 피트와 인치를 함께 출력하는
프로그램을 작성하라. 센티미터와 인치는 소수부도 허용해야 한다. 프로그램은, 사용자가 양수가 아닌 값을 
입력할 때까지 키를 계속 입력할 수 있도록 해야한다. 그리고 다음 예와 같은 포맷으로 출력해야 한다.*/
#include <stdio.h>

int main(void)
{
  const double IN = 0.39370;
  const int FT = 12;
  double cm, in;
  int ft;

  printf("센티미터 단위로 키를 입력하시오 : ");
  scanf("%lf", &cm);

  while (cm > 0)
    {
      in = cm * IN;
      ft = (int) in / FT;
      in -= (ft * 12);
      printf("%.1f센티미터는 %d피트, %.1f인치입니다.\n", cm, ft, in);
      printf("센티미터 단위로 키를 입력하시오(끝내려면 <= 0) : ");
      scanf("%lf", &cm);
    }
  printf("안녕!");
  
  return 0;
}