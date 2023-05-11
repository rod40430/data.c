// align.c -- _Alignof와 _Alignas 사용 (C11)
#include <stdio.h>
#include <stdalign.h>

int main(void)
{
  double dx;
  char ca;
  char cx;
  double dz;
  char cb;
  char _Alignas(double) cz;

  printf("char 조정배치(alignment) : %zd\n", _Alignof(char));
  printf("double 조정배치(alignment) : %zd\n", _Alignof(double));
  printf("&dx : %p\n", &dx);
  printf("&ca : %p\n", &ca);
  printf("&cx : %p\n", &cx);
  printf("&dz : %p\n", &dz);
  printf("&cb : %p\n", &cb);
  printf("&cz : %p\n", &cz);

  return 0;
}
