// intconv.c -- 잘못 짝지어진 정수형 변환 지정자
#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
  short num = PAGES;
  short mnum = - PAGES;

  printf("short형, unsigned short형 num: %hd %hu\n", num, num);
  printf("short형, nusigned short형 -num: %hd %hu\n", mnum, mnum);
  printf("int형, char형 num: %d %c\n", num, num);
  printf("int형, short형, char형 WORDS: %d %hd %c\n", WORDS, WORDS, WORDS);
  
  return 0;
}