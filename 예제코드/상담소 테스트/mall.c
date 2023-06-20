// mall.c Queue 인터페이스를 사용한다.
// queue.c와 함께 컴파일하라
#include <stdio.h>
#include <stdlib.h>  // rand() srand()를 사용하기 위해
#include <time.h>  // time()을 사용하기 위해
#include "cord.h"  // Item을 새롭게 정의한 typedef

#define MIN_PER_HR 60.0

bool newcustomer(double x);  // 새로운 고객이 도착했는가?
Item customertime(long when);  // 고객 매개변수를 설정한다.

int main(void)
{
  Queue line;
  Item temp;  // 새로운 고객 데이터
  int hours;  // 시뮬레이션 시간
  int perhour;  // 1시간에 도착하는 평균 고객 수
  long cycle, cyclelimit;  // 루프 카운터, 제한 시간
  long turnaways = 0;  // 큐가 가득 차서 그냥 돌려보낸 사람 수
  long customers = 0;  // 큐에 추가된 고객 수
  long served = 0;  // 시뮬레이션 동안 상담받은 고객 수
  long sum_line = 0;  // 고객들이 대기하는 줄의 누적 길이
  int wait_time = 0;  // sigmund가 상담을 끝낼 때까지 남은 시간
  double min_per_cust;  // 고객들이 평균적으로 도착하는 시간 간격
  long line_wait = 0;  // 고객들이 줄에서 대기하는 누적 시간

  InitializeQueue(&line);
  srand(time(0));  // rand()의 무작위 초기화
  puts("사례 연구 : Sigmund Lander 박사의 정신과 상담실");
  puts("시뮬레이션 시간을 입력하시오 : ");
  scanf("%d", &hours);
  cyclelimit = MIN_PER_HR * hours;
  puts("1시간에 도착하는 평균 고객 수를 입력하시오 : ");
  scanf("%d", &perhour);
  min_per_cust = MIN_PER_HR / perhour;

  for (cycle = 0; cycle < cyclelimit; cycle++)
    {
      if (newcustomer(min_per_cust))
      {
        if (QueueIsFull(&line))
          turnaways++;
        else
        {
          customers++;
          temp = customertime(cycle);
          EnQueue(temp, &line);
        }
      }

      if (wait_time <= 0 && !QueueIsEmpty(&line))
      {
        DeQueue(&temp, &line);
        wait_time = temp.processtime;
        line_wait += cycle - temp.arrive;
        served++;
      }
      
      if (wait_time > 0)
        wait_time--;
      
      sum_line += QueueItemCount(&line);
    }

  if (customers > 0)
  {
    printf("큐에 추가된 고객 수 : %ld\n", customers);
    printf("   상담받은 고객 수 : %ld\n", served);
    printf("   돌려보낸 사람 수 : %ld\n", turnaways);
    printf("     큐의 평균 길이 : %.2f\n", (double) sum_line / cyclelimit);
    printf("     평균 대기 시간 : %.2f min.\n", (double) line_wait / served);
  }
  else
    puts("망했군. 고객이 한 명도 없어!");

  EmptyTheQueue(&line);
  puts("시뮬레이션 종료.");

  return 0;
}

// x는 고객들이 평균적으로 도착하는시간 간격(분 단위)이다.
// 이 시간 내에 새로운 고객이 도착하면 true를 리턴한다.
bool newcustomer(double x)
{
  if (rand() * x / RAND_MAX < 1)
    return true;
  else
    return false;
}

// when은 그 고객이 도착한 시각이다.
// 1, 2, 3 중에서 무작위로 선택된 상담 처리 시간과
// 도착 시각으로 설정된 Item 구조체를 리턴한다.
Item customertime(long when)
{
  Item cust;

  cust.processtime = rand() % 3 + 1;
  cust.arrive = when;

  return cust;
}
