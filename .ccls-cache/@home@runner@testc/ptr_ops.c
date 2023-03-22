// ptr_ops.c -- 포인터 연산
#include <stdio.h>

int main(void)
{
  int urn[5] = {100, 200, 300, 400, 500};
  int *ptr1, *ptr2, *ptr3;

  ptr1 = urn;  // 포인터에 주소를 대입한다.
  ptr2 = &urn[2];  // 포인터에 주소를 대입한다.
  // 역참조된 포인터를 참조하여 포인터의 주소를 얻는다.
  printf("포인터의 값, 역참조된 포인터가 가리키는 값, 포인터의 주소 : \n");
  printf("\nptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
    ptr1, *ptr1, &ptr1);

  // 포인터 덧셈
  ptr3 = ptr1 + 4;
  printf("\n포인터에 정수를 더한다 : \n");
  printf("\nptr1 + 4 = %p, *(ptr4 + 3) = %d\n",
    ptr1 + 4, *(ptr1 + 3));

  ptr1++;  // 포인터를 증가시킨다.
  printf("\nptr++을 수행한 후의 값 : \n");
  printf("\nptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
    ptr1, *ptr1, &ptr1);

  ptr2--;  // 포인터를 감소시킨다.
  printf("\nptr2--을 수행한 후의 값 : \n");
  printf("\nptr2 = %p, *pt21 = %d, &ptr2 = %p\n",
    ptr2, *ptr2, &ptr2);

  --ptr1;  // 최초의 값으로 복원한다.
  ++ptr2;  // 최초의 값으로 복원한다.
  printf("\n두 포인터를 최초의 값으로 복원한다 : \n");
  printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
  
  // 포인터에서 다른 포인터를 뺸다.
  printf("\n포인터에서 다른 포인터를 뺸다 : \n");
  printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",
    ptr2, ptr1, ptr2 - ptr1);

  // 포인터에서 정수를 뺸다.
  printf("\n포인터에서 정수를 뺸다 : \n");
  printf("ptr3 = %p, ptr3 - 2 = %p",
    ptr3, ptr3 - 2);

  return 0;
}