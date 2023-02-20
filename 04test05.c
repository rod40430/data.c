#include <stdio.h>
#define BOOK "전쟁과 평화"

int main(void)
{
  float cost = 12.99;
  float percent = 80.0;

  printf("신간 \"%s\"를 $%.2f에 드립니다.\n"
        "그것은 정가의 %.0f% 가격입니다.", BOOK, cost, percent);

  return 0;
}