// 4. 다음 프로그램에서 잘못된 부분을 찾아라.
#include <stdio.h>

int main(void)
{
  int i = 1;
  float n;
  printf("조심해 ! 한 무더기의 소수점을 가진 수들이 쏟아진다!\n");
  while (i++ < 30)
    {
      n = 1.0 / i;
      printf(" %f\n", n);
    }
  printf("이제 끝이다!\n");

  return 0;
}