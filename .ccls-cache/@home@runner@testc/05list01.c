// shoes2.c -- 사이즈 단위를 인치 단위로 변환한다
#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
  const double SCALE = 0.333;
  double shoe, foot;
  printf("신발사이즈(남자용)   발길이\n");
  shoe = 3.0;

  while (shoe < 18.5)
    {
      foot = SCALE * shoe + ADJUST;
      printf("%10.1f %15.2f인치\n", shoe, foot);
      shoe += 1.0;
    }
  printf("그 신발이 발에 맞는다면, 그것을 신으세요.\n");

  return 0;
}