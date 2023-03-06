/*07  사용자에게 하나의 float형 수를 입력하도록 요구하여, 그 수의 세제곱을 출력하는 프로그램을
작성하라, 그 값의 세제곱을 구하여 출력하는 사용자 함수를 작성하라. main() 함수는 이 함수에 
입력받은 값을 전달한다.*/
#include <stdio.h>

void Cubic(float);

int main(void)
{
  float num;

  printf("수를 입력해주세요 : ");
  scanf("%f", &num);
  
  Cubic(num);
  
  return 0;
}

void Cubic(float num)
{
  float add;
  int i = 1;

  add = num;
  
  while (i++ <= 2)
    {
      add *= num;
    }
  printf("%.1f\n", add);
}