#include <stdio.h>
#include <string.h>
#define Q "그의 햄럿은 저속하지 않고 재미있었다."

int main(void)
{
  printf("그는 그 그림을 $%2.2f에 팔았다.\n", 2.345e2);
  printf("%c  %c  %c\n", 'H', 105, '\41');
  printf("%s\n는 %d 문자이다.\n", Q, strlen(Q));
  printf("%2.2e은 %2.2f과 같으냐?", 1201.0, 1201.0);

  return 0;
}