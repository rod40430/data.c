/*05 처음 20까지 정수들의 합을 구하는 프로그램인 addemup.c(리스트 5.13)를 수정하라.
(첫째 날에 $1, 둘째 날에 $2, 셋째 날에 $3와 같이 급료를 받으면, 20일이 지났을 때 모두
얼마를 받게 되는지 계산하는 프로그램이라고 생각할 수 있다.) 계산을 어디까지 진행할 것이지 즉 
사용자가 일한 날짜를 알려 줄 수 있도록 프로그램을 수정하라. 즉, 20을 값을 읽어 저장하는 변수로
대체하라.*/
#include <stdio.h>

int main(void)
{
  int count, user, money;

  printf("일한 일수를 입력해주세요 : ");
  scanf("%d", &user);
  count = 0;
  money = 0;
  

  while (count++ < user)
    {
      money += count;
    }
    
  printf("일한 일수 : %d\n누적 금액 : %d$\n", user, money);

  return 0;
}
