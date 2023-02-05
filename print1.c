#include <stdio.h>

int main(void)
{  
  int ten = 10;
  int two = 2;
  
  printf("바르게 저장했을 떄: ");
  printf("%d에서 %d를 뺴면 %d\n", ten, 2, ten - two);
  printf("틀리게 저장했을 때: ");
  printf("%d에서 %d를 뺴면 %d\n", ten);

  return 0;
}