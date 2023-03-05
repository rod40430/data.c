// 13. 다음과 같은 일을 하는 문장을 작성하라.
// a. 변수 x를 1만큼 감소시킨다.
// b. n을 k로 나눈 나머지를 m에 대입한다.
// c. q를, b에서 a를 뺀 차로 나눈 결과를 p에 대입한다.
// d. a와 b의 합을, c와 d의 곱으로 나눈 결과를 x에 대입한다.
#include <stdio.h>

int main(void)
{
  int x, n, k, m, q, p, a, b, c, d;
  x = n = k = m = q = p = a = b = c = d = 1;

  x--;
  printf("a. 변수 x를 1만큼 감소시킨다. %d\n", x);
  
  m = n % k;
  printf("b. n을 k로 나눈 나머지를 m에 대입한다. %d\n", m);

  p = q / (b - a);
  printf("c. q를, b에서 a를 뺀 차로 나눈 결과를 p에 대입한다. %d\n", p);

  x = (a + b) / (c * d);
  printf("d. a와 b의 합을, c와 d의 곱으로 나눈 결과를 x에 대입한다. %d\n", x);

  return 0;
}