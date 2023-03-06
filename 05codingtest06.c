/*06  프로그래밍 연습 05의 프로그램을, 정수들의 제곱의 합을 구하도록 수정하라. (첫쨰 날에 1$, 
둘째 날에 $4, 셋째 날에 $9와 같ㅇ이 급료를 받으면, 총 얼마를 받게 될까? 이 조건으로 근로계약을
맺는 것이 훨씬 낫다!) C언어는 제곱 함수를 제공하지 않는다. n * n이 n의 제곱이라는 사실을 
사용하라.*/

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
      money += (count * count);
    }
    
  printf("일한 일수 : %d\n누적 금액 : %d$\n", user, money);

  return 0;
}
