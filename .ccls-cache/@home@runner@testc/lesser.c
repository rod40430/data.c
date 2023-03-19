/* lesser.c -- 둘 중에서 작은 것을 구한다.*/
#include <stdio.h>
int imin(int, int);

int main(void)
{
  int evil1, evil2;

  printf("두 정수를 입력하시오.(끝내려면 q) : \n");
  while (scanf("%d %d", &evil1, &evil2) == 2)
    {
      printf("(%d, %d)에서 작은 것은 %d\n",
        evil1, evil2, imin(evil1, evil2));
      printf("두 정수를 입력하시오.(끝내려면 q) : \n");
    }
  printf("종료!\n");

  return 0;
}

int imin(int n, int m)
{
  int min;

  if (n < m)
  {
    min = n;
  }
  else
  {
    min = m;
  }

  return min;
}