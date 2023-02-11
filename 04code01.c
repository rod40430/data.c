// talkback.c -- 수다스럽지만, 정보를 주는 프로그램
#include <stdio.h>
#include <string.h>  // strlen() 프로토타입을 사용하기 위해
#define DENSITY 62.4  // 신체밀도(입방피트당 파운드 수)
int main(void)
{
  float weight, volume;
  int size, letters;
  char name[40]; // name은 영문자로 40개를 넣을 수 있는 배열이다.

  printf("하이! 이름이 뭐에요?\n");
  scanf("%s", name);
  printf("%s 씨, 몸무게는 몇 파운드나 나가요?\n", name);
  scanf("%f", &weight);
  size = sizeof name;
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("옳거니, %s 씨의 몸은 %2.2f입방피트를 차지합니다.\n", name, volume);
  printf("그리고 이름이 %d글자니까,\n", letters);
  printf("저장하려면 %d바이트가 필요합니다.\n", size);
  
  return 0;
}