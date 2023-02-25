// wheat.c -- 지수적 증가
#include <stdio.h>
#define SQUARES 64

int main(void)
{
  const double CROP = 2e16;  // 밀 수확에서의 세계 밀 생산량
  double current, total;
  int count = 1;

  printf("네모칸      추가         누계     ");
  printf("세계 수확량과의\n");
  printf("번  호     낱알 수      낱알 수     ");
  printf("상대 비율\n");
  total = current = 1.0;  // 낱알 하나로부터 시작한다.
  printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);

  while (count <= SQUARES)
    {
      current *= 2.0;  // 다음 네모칸은 2배의 낱알로 채운다;
      total += current;  // 누계를 갱신한다.
      printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
      count += 1;
    }
  printf("이제 끝이다.\n");

  return 0;
}