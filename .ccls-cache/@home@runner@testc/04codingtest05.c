// 05 다운로드 속도가 초당 몇 메가바이트(Mbs)인지와 파일 크기가 몇 메가바이트(MB)인지 입력
// 하도록 요청하는 프로그램을 작성하라. 이 프로그램은 파일에 대한 다운로드 시간을 계산해서
// 출력해야 한다. 1바이트는 8비트라는 것을 명심하라. float형을 사용하고 나눗셈을 위해 /를
// 사용해라. 프로그램은 세 가지 값 모두(속도, 파일 크기, 다운로드 시간)을 소숫점 오른쪽 
// 두 자리까지 나타내고 다음과 같이 리포트해야 한다.
#include <stdio.h>

int main(void)
{
  float speed, file, time;

  printf("초당 몇 메가비트인지와 파일의 크기를 입력해주세요.\n");
  printf("초당 메가비트 : ");
  scanf(" %f", &speed);
  printf("파일의 크기 : ");
  scanf(" %f", &file);

  time = file / (speed / 8);

  printf("\n초당 %.2f메가비트, %.2f메가바이트 파일을\n", speed, file);
  printf("%.2f초에 다운로드한다.", time);

  return 0;
}