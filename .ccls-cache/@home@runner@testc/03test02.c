#include <stdio.h>

int main(void)
{
   int as_code;

  printf("ASCII코드값을 입력해주세요 :");
  scanf("%d", &as_code);
  printf("\n당신이 입력한 코드값은 %d이며\n변환시 %c입니다.", as_code, as_code);
  
  
  return 0;
}