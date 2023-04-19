// dyn_arr.c -- 동적으로 할당된 배열
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double * ptd;
  int max;
  int number;
  int i = 0;

  puts("double형 값을 최대 몇 개까지 입력할 예정입니까?");
  if (scanf("%d", &max) != 1)
  {
    puts("숫자가 정확하게 입력되지 않았습니다. -- 안녕!");
    exit(EXIT_FAILURE);
  }
  ptd = (double *) malloc(max * sizeof (double));
  if (ptd == NULL)
  {
    puts("메모리 할당에 실패했습니다. 미안합니다.");
    exit(EXIT_FAILURE);
  }
  // ptd는 이제 max개의 원소를 가지는 배열을 가리킨다.
  puts("값들을 입력하시오(끝내려면 q) : ");
  while (i < max && scanf("%lf", &ptd[i]) == 1)
    i++;
  printf("입력하신 %d개의 값들은 다음과 같습니다.\n", number = i);
  for (i = 0; i < number; i++)
    {
      printf("%7.2f", ptd[i]);
      if (i % 7 == 6)
        putchar('\n');
    }
  if (i % 7 != 0)
    putchar('\n');
  puts("종료.");
  free(ptd);

  return 0;
}
