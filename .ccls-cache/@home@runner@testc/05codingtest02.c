/*02  하나의 정수를 요구하여, 그 값부터 시작하여 그보다 10만큼 큰 값까지의 모든 정수들을 출력하는
프로그램을 작성하라. (즉, 입력이 5이면, 5에서 15까지 출력한다.) 각각의 출력값을 스페이스 또는 
탭이나 개행으로 분리시켜라.*/
#include <stdio.h>

int main(void)
{
  int a, b;
  printf("정수를 입력해주세요 : ");
  scanf("%d", &a);

  b = a + 10;
  while(a <= b)
    {
      printf("%d\n", a);
      a++;
    }
  printf("끝\n");

  return 0;
}