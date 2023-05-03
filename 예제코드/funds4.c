// funds4.c -- 함수에 구조체의 배열을 전달한다.
#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct funds 
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(const struct funds money[], int n);

int main(void)
{
  struct funds jones[N] = 
  {
    {
      "국민은행",  
      4032.27,
      "동아상호신용금고",
      8543.94
    },
    {
      "우리 은행",
      3620.88,
      "대한상호신용금고",
      3802.91
    } 
  };

  printf("Jones씨네 두 형제의 총 잔고는 $%.2f입니다.\n", sum(jones, N));

  return 0;
}

double sum(const struct funds money[], int n)
{
  double total;
  int i;

  for (i = 0, total = 0; i < n; i++)
    total += money[i].bankfund + money[i].savefund;

  return total;
}
