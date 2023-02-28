// runnuing.c -- 육상선수에게 유용한 프로그램
#include <stdio.h>
const int S_PER_M = 60;  // 1분의 초 수
const int S_PER_H = 3600; // 1시간의 초 수
const double M_PER_K = 0.62137; // 1킬로미터의 마일 수

int main(void)
{
  double distk, distm;  // 달린 거리 (각각 킬로미터 수와 마일 수)
  double rate;  // 평균속도(mph; 시간당 마일 수로)
  int min, sec;  // 달린 시간(분 수와 초 수로)
  int time;  // 달린 시간(초 수로만)
  double mtime;  // 1마일을 달린 시간(초 수로만)
  int mmin, msec;  // 1마일을 달린 시간(분 수와 초 수로)

  printf("이 프로그램은 미터단위계로 측정한 달리기 기록을\n");
  printf("1마일을 달린 시간과, 평균속도(mph)로 변환한다.\n");
  printf("달린 거리를 킬로미터 수로 입력하시오.\n");
  scanf("%lf", &distk);
  printf("달린 시간을 분 수와 초 수로 입력하시오.\n");
  printf("먼저 분 수로부터 입력하시오.\n");
  scanf("%d", &min);
  printf("이제 초 수를 입력하시오.\n");
  scanf("%d", &sec);
  time = S_PER_M * min + sec;  // 달린 시간을 순전한 초 수로 변환한다.
  distm = M_PER_K * distk;  // 킬로미터수를 마일 수로 변환한다.
  rate = distm / time * S_PER_H;  // 시간/거리 = 마일당 시간
  mtime = (double) time / distm;
  mmin = (int) mtime / S_PER_M;  // 완전한 분 수를 구한다.
  msec = (int) mtime % S_PER_M;  // 나머지 초 수를 구한다.
  printf("당신은 %1.2f킬로미터(%1.2f마일)를 %d분, %d초에 달렸다\n", distk, distm, min, sec);
  printf("이 페이스는 1마일을 %d분 %d초에 달린 것에 해당한다.\n", mmin, msec);
  printf("평균속도는 %1.2f mph였다.\n", rate);

  return 0;
}