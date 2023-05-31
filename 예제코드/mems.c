// mems.c -- memcpy()와 memove()를 사용한다.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

void show_array(const int ar[], int n);
// 만약 c11 _static_assert가 지원되지 않으면 다음을 삭제하라
// static_assert(sizeof(double) == 2 * sizeof(int), "double not twice int size");
int main(void)
{
  int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target[SIZE];
  double curious[SIZE / 2] = {2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30};

  puts("memcpy() 사용 : ");
  puts("values 배열의 값 (원본 데이터) : ");
  show_array(values, SIZE);
  memcpy(target, values, SIZE * sizeof(int));
  puts("target 배열의 값 (사본 데이터) : ");
  show_array(target, SIZE);

  puts("\n겹치는 범위가 있을 때 memmove() 사용 : ");
  memmove(values + 2, values, 5 * sizeof(double));
  puts("target 배열의 값 (원소 0-5를 원소 2-7에 복사) : ");
  show_array(values, SIZE);

  puts("\ndouble형을 int형으로 복사할 때 memcpy() 사용 : ");
  memcpy(target, curious, (SIZE / 2) * sizeof(double));
  puts("target 배열의 값 (5개의 double형 값이 10개의 int형 위치에 들어간다) : ");
  show_array(target, SIZE);
  show_array(target + 5, SIZE / 2);
  
  return 0;
}

void show_array(const int ar[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    printf("%d ", ar[i]);
  putchar('\n');
  
}
