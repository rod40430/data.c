// funds2.c -- 구조체를 가리키는 포인터를 전달한다.
#include <stdio.h>
#define FUNDLEN 50

struct funds
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(const struct funds*);  // 전달인자가 포인터다.

int main(void)
{
  struct funds stan = 
  {
    "국민은행",
    3024.72,
    "동아상호신용금고",
    9237.11
  };

  printf("stan 씨의 총 잔고는 $%.2f입니다.\n", sum(&stan));

  return 0;
}

double sum(const struct funds* money)
{
  return (money->bankfund + money->savefund);
  
}
