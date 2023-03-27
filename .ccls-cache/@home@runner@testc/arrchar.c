// arrchar.c -- 포인터의 배열, 문자열의 배열
#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
  const char *mytalents[LIM] = {
  "Adding numbers swiftly",
  "Multiplying accurately", "Stashing data",
  "Following instructions to the letter",
  "understanding the C language"
  };
  char yourtalents[LIM][SLEN] = {
  "Walking in a straight line",
  "Sleeping", "Watching television",
  "Mailing letters", "Reading email"
  };

  puts("Let's compare talents.");
  printf("%-36s %-25s\n", "MY Talents", "Your Talents");
  for (int i = 0; i < LIM; i++)
    {
      printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    }
  printf("\nsizeof mytalents : %zd, sizeof yourtalents: %zd\n",
    sizeof(mytalents), sizeof(yourtalents));

  return 0;
}