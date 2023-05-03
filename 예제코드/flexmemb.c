// flexmemb.c -- 플렉서블 배열 멤버
#include <stdio.h>
#include <stdlib.h>

struct flex
{
  size_t count;
  double average;
  double scores[];  // 플렉서블 배열 멤버
};

void showFlex(const struct flex* p);

int main(void)
{
  struct flex* pf1, * pf2;
  int n = 5;
  int i;
  double tot = 0.0;

  // 구조체와 배열을 위한 공간을 할당한다.
  pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
  pf1->count = n;

  for (i = 0; i < n; i++)
    {
      pf1->scores[i] = 20.0 - (double) i;
      tot += pf1->scores[i];
    }
  pf1->average = tot / n;
  showFlex(pf1);

  n = 9;
  tot = 0;
  pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
  pf2->count = n;

  for (i = 0; i < n; i++)
    {
      pf2->scores[i] = 20.0 - (double) i / 2.0;
      tot += pf2->scores[i];
    }
  pf2->average = tot / n;
  showFlex(pf2);
  free(pf1);
  free(pf2);
  
  return 0;
}

void showFlex(const struct flex* p)
{
  int i;
  
  printf("스코어 : ");

  for (i = 0; i < p->count; i++)
    printf("%g ", p->scores[i]);
  printf("\n평 균 : %g\n", p->average);
}
