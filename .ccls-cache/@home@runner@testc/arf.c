// arf.c -- 배열 처리 함수
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
  double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

  printf("원래의 dip배열 : \n");
  show_array(dip, SIZE);
  mult_array(dip, SIZE, 2.5);
  printf("mult_array() 호출 후의 dip 배열 : \n");
  show_array(dip, SIZE);

  return 0;
}

// 배열의 내용을 표시한다.
void show_array(const double ar[], int n)
{
  int i;

  for (i = 0; i < 5; i++)
    {
      printf("%8.3f", ar[i]);
    }
  putchar('\n');
}

// 배열의 각 원소에 동일한 곱수를 곱한다.
void mult_array(double ar[], int n, double mult)
{
  int i;

  for (i = 0; i < 5; i++)
    {
      ar[i] *= mult;
    }
}