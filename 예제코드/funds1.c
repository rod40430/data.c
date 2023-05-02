// funds1.c -- 구조체의 맴버를 전달인자로 전달한다.
#include <stdio.h>
#define FUNDLEN 50

struct funds
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(double, double);

int main(void)
{
  struct funds stan = 
  {
    "국민은행",
    3024.72,
    "동아상호신용금고",
    9237.11
  };

  printf("stan 씨의 총 잔고는 $%.2f입니다.\n", sum(stan.bankfund, stan.savefund));

  return 0;
}

double sum(double x, double y)
{
  return (x + y);
}
