// 3. 다음 식의 각각을 계산해라.
#include <stdio.h>

int main(void)
{
  printf("30.0 / 40.0 * 5.0 = %.2f\n", 30.0 / 40.0 * 5.0);
  printf("30.0 / (4.0 * 5.0) = %.2f\n", 30.0 / (4.0 * 5.0));
  printf("30 / 4 * 5 = %d\n", 30 / 4 * 5);
  printf("30 * 5 / 4 = %d\n", 30 * 5 / 4);
  printf("30 / 4.0 * 5 = %.2f\n", 30 / 4.0 * 5);
  printf("30 / 4 * 5.0 = %.2f\n", 30 / 4 * 5.0);

  return 0;
}