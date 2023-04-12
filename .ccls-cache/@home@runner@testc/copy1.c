#include<stdio.h>
#define SIZE 3

int main(void)
{
  char arr[SIZE][4] = {{1,2,3,4},{5,6,7,8},{9,0,0,0}};

  // for (int i = 0; i < SIZE; i++)
    // printf("%s\n", arr[i]);
  printf("%c", arr[2][0]);
  
  return 0;
}