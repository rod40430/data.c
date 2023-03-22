// order.c -- 포인터 연산에서의 우선순위.
#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{
  int *p1, *p2, *p3;

  p1 = p2 = data;
  p3 = moredata;
  
  printf("    *p1 = %d,    *p = %d,    *p3 = %d\n",
    *p1, *p2, *p3);
  printf("  *p1++ = %d,  *++p = %d,(*p3)++ = %d\n",
    *p1++, *++p2, (*p3)++);
  printf("    *p1 = %d,    *p = %d,    *p3 = %d\n",
    *p1, *p2, *p3);
  

  return 0;
}