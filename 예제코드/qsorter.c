// qsorter.c -- qsort()를 사용하여 수들을 소팅한다.
#include <stdio.h>
#include <stdlib.h>

#define NUM 40

void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int mycomp(const void * p1, const void * p2);

int main(void)
{
  double vals[NUM];
  
  fillarray(vals, NUM);
  puts("무작위 리스트 : ");
  showarray(vals, NUM);
  qsort(vals, NUM, sizeof(double), mycomp);
  puts("\n정렬된 리스트 : ");
  showarray(vals, NUM);

  return 0;
}

void fillarray(double ar[], int n)
{
  int index;

  for (index = 0; index < n; index++)
    ar[index] = (double) rand() / ((double) rand() + 0.1);
}

void showarray(const double ar[], int n)
{
  int index;

  for (index = 0; index < n; index++)
    {
      printf("%9.4f", ar[index]);
      if (index % 6 == 5)
        putchar('\n');
    }
}

//  오름차순으로 정렬한다.
int mycomp(const void *p1, const void *p2)
{
  // 값들에 접근하기 위해 double형을 가리키는 포인터를 사용한다.
  const double *a1 = (const double *) p1;
  const double *a2 = (const double *) p2;

  if (*a1 < *a2)
    return -1;
  else if (*a1 == *a2)
    return 0;
  else
    return 1;
}
