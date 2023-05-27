// generic.c -- 범용 매크로 정의
#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180 / (4 * atanl(1)))

// 범용 제곱근 함수
#define SQRT(X) _Generic((X),\
  long double : sqrtl,\
  default : sqrt,\
  float : sqrtf\
) (X)

// 범용 사인 함수, angle in degrees
#define SIN(X) _Generic((X),\
  long double : sinl((X) / RAD_TO_DEG),\
  default : sinl((X) / RAD_TO_DEG),\
  float : sinl((X) / RAD_TO_DEG)\
)

int main(void)
{
  float x = 45.0f;
  double xx = 45.0;
  long double xxx = 45.0L;

  long double y = SQRT(x);
  long double yy = SQRT(xx);
  long double yyy = SQRT(xxx);

  printf("%.17Lf\n", y);  // float에 매치됨
  printf("%.17Lf\n", yy);  // 기본 설정에 매치됨
  printf("%.17Lf\n", yyy);  // long double에 매치됨

  int i = 45;
  yy = SQRT(i);  // 기본 설정에 매치됨

  printf("%.17Lf\n", yy);

  yyy = SIN(xxx);  // long double에 매치됨
  printf("%.17Lf\n", yyy);

  return 0;
}
