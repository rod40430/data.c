// rand0.c -- 난수들을 발생시킨다.
// 이식 가능한 ANSI C 표준 알고리즘을 사용한다.
static unsigned long int next = 1;  // 종자값

int rand0(void)
{
  // 의사 난수를 발생시키는 마법의 공식
  next = next * 1103515245 + 12345;
  return (unsigned int) (next/65536) % 32768;
}
