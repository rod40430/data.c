// zippo2.c -- 포인터 변수를 사용하는 zippo 정보
#include <stdio.h>
int main(void)
{
  int zippo[4][2] = {
  {2, 4},
  {6, 8},
  {1, 3},
  {5, 7}
  };
  int (*pz)

  printf("    zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
  printf(" zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
  printf("   *zippo = %p,   *zippo + 1 = %p\n", *zippo, *zippo + 1);

  printf("zippo[0][0] = %d\n", zippo[0][0]);
  printf("  *zippo[0] = %d\n", *zippo[0]);
  printf("    **zippo = %d\n", **zippo);
  printf("        zippo[2][1] = %d\n", zippo[2][1]);
  printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));

  return 0;
}