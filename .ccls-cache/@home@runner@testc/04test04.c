#include <stdio.h>
#define B "거짓말"
#define X 10

int main(void)
{
  int age, xp;
  char name[40];

  printf("이름이 뭡니까?\n");
  scanf("%s", name);
  printf("좋아요, %s씨, 나이는 얼마죠?\n", name);
  scanf("%i", &age);
  xp = age + X;
  printf("%s! 최소한 %d세는 되어 보이는데.\n", B, xp);

  return 0;
}