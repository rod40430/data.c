// fields.c -- 비트 필드들을 정의하여 사용한다.
#include <stdio.h>
#include <stdbool.h>  //C99, 선언 bool, true, false

// 선 스타일들
#define SOLID  0
#define DOTTED 1
#define DASHED 2
// 원색들
#define BLUE   4
#define GREEN  2
#define RED    1
// 혼합된 색상
#define BLACK  0
#define YELLOW  (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN    (GREEN | BLUE)
#define WHITE   (RED | GREEN | BLUE)

const char* colors[8] = 
{
  "black",
  "red",
  "green",
  "yellow",
  "blue",
  "magenta",
  "cyan",
  "white"
};

struct box_props
{
  bool opaque                : 1;  // 또는 unsigned int (C99 이전)
  unsigned int fill_color    : 3;
  unsigned int               : 4;
  unsigned int show_border   : 1; // 또는 unsigned int (C99 이전)
  unsigned int border_color  : 3;
  unsigned int border_style  : 2;
  unsigned int               : 2;
};

void show_settings(const struct box_props* pb);

int main(void)
{
  // box_props 구조체를 만들고 초기화한다.
  struct box_props box = {true, YELLOW, true, GREEN, DASHED};

  printf("최초의 박스 설정 : \n");
  show_settings(&box);

  box.opaque = false;
  box.fill_color = WHITE;
  box.border_color = MAGENTA;
  box.border_style = SOLID;

  printf("\n변경된 박스 설정 : \n");
  show_settings(&box);

  return 0;
}

void show_settings(const struct box_props* pb)
{
  printf("사격형은 %s이다.\n",
    pb->opaque == true ? "불투명" : "투명");
  printf("체우기 색상은 %s이다. \n", colors[pb->fill_color]);
  printf("테두리는 %s 상태에 있다.\n",
    pb->show_border == true ? "보이는" : "가려진");
  printf("테두리 색상은 %s이다.\n", colors[pb->border_color]);
  printf("테두리 스타일은 ");
  switch (pb->border_style)
    {
      case SOLID : printf("실선이다.\n");
        break;
      case DOTTED : printf("점선이다.\n");
        break;
      case DASHED : printf("파선이다.\n");
        break;
      
      default : printf("알 수 없는 유형이다.");
    }
}
