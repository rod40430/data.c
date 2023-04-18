// s_and_r.c -- rand1()과 srand1()이 들어 있는 파일
// 이식 가능한 ANSI C 표준 알고리즘을 사용한다.
static unsigned long int next = 1;

int rand1(void)
{
  next = next * 1103515245 + 12345;
  return (unsigned int) (next/65536) % 32768;
}

void srand1(unsigned int seed)
{
  next = seed;
}
