/* showchar2.c -- 지정한 행 수와 열 수만큼 문자들을 출력한다.*/
#include <stdio.h>

void display (char cr, int lines, int width);

int main(void)
{
  int ch; // 출력할 문자
  int rows, cols; // 행 수와 열 수

  printf("문자 하나와 두 개의 정수를 입력하시오.\n");
  while ((ch = getchar()) != '\n')
    {
      if (scanf("%d %d", &rows, &cols) != 2)
      {
        break;
      }

      display (ch, rows, cols);

      while (getchar() != '\n') 
        {
          continue;
        }
      printf("또 다른 문자와 두 개의 정수를 입력하시오.\n");
      printf("끝내려면 그냥 Enter 키를 누르시오.\n");
    }
  
  printf("안녕!\n");

  return 0;
}

void display (char cr, int lines, int width)
{
  int row, col;

  for (row = 1; row <= lines; row++)
    {
      for (col = 1; col <= width; col++)
        {
          putchar(cr);
        }
      putchar('\n');  //  라인을 끝내고 새 라인을 시작한다.
    }
}