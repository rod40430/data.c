// binbit.c -- 비트 연산자들을 사용하여 2진수표기를 구한다.
#include <stdio.h>
#include <limits.h>  // CHAR_BIT용, char당 bit수

char* itobs(int, char*);
void show_bstr(const char*);

int main(void)
{
  char bin_str[CHAR_BIT * sizeof(int) + 1];
  int number;

  puts("정수를 입력하면 그것이 2진수 표기를 보여 준다.");
  puts("수가 아닌 것을 입력하면 프로그램이 종료된다.");

  while (scanf("%d", &number) == 1)
    {
      itobs(number, bin_str);
      printf("%d의 2진수 표기는 다음과 같다.\n", number);
      show_bstr(bin_str);
      putchar('\n');
    }

  puts("안녕!");

  return 0;
}

char* itobs(int n, char* ps)
{
  int i;
  const static int size = CHAR_BIT * sizeof(int);

  for (i = size - 1; i >= 0; i--, n >>= 1)
    ps[i] = (01 & n) + '0';  // ASCII 또는 유사하게 추정
  ps[size] = '\0';

  return ps;
}

// 2진수 표기 문자열을 4개씩 블록으로 보여 준다.
void show_bstr(const char* str)
{
  int i = 0;

  while (str[i])  // 널 문자가 아니면
    {
      putchar(str[i]);
      if (++i % 4 == 0 && str[i])
        putchar(' ');
    }
}
