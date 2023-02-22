#include <stdio.h>

int main(void)
{
  int num1;
  float num2;
  char ch[20];
  double num3;
  char ch1[20];
  char ch2[20];
  
  printf("a : \n");
  scanf(" %d", &num1);


  printf("b : \n");
  scanf(" %f %le", &num2, &num3);


  printf("c : \n");
  scanf(" %s", ch);


  printf("d : \n");
  scanf(" %[^\n]s", ch1);


  printf("e : \n");
  scanf(" %*s%s", ch2);

  printf("%d\n", num1);
  printf("%.2f %.2e\n", num2, num3);
  printf("%s\n", ch);
  printf("%s\n", ch1);
  printf("%s", ch2);
  
  return 0;
}