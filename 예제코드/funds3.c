// funds3.c -- 구조체를 전달한다.
#include <stdio.h>
#define FUNDLEN 50

struct funds
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(struct funds moolah);  // 전달인자가 포인터다.

int main(void)
{
  struct funds stan = 
  {
    "국민은행",
    4032.27,
    "동아상호신용금고",
    8543.94
  };

  printf("stan 씨의 총 잔고는 $%.2f입니다.\n", sum(stan));

  return 0;
}

double sum(struct funds moolah)
{
  return (moolah.bankfund + moolah.savefund);
  
}
