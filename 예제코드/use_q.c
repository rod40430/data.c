// use_q.c -- Queue 인터페이스를 테스트하는 드라이버
// queue.c와 함께 컴파일하라
#include <stdio.h>
#include "cord.h"  // Queue와 Item을 정의한다.

int main(void)
{
  Queue line;
  Item temp;
  char ch;

  InitializeQueue(&line);
  puts("Queue 인터페이스를 테스트합니다. 값을 추가하려면 a,");
  puts("값을 삭제하려면 d, 테스트를 끝내려면 q를 입력하시오.");
  while ((ch = getchar()) != 'q')
    {
      if (ch != 'a' && ch != 'd')  // 그 밖의 입력은 무시한다.
        continue;
      
      if (ch == 'a')
      {
        printf("추가할 정수 : ");
        scanf("%d", &temp);
        if (!QueueIsFull(&line))
        {
          printf("큐에 %d추가\n", temp);
          EnQueue(temp, &line);
        }
        else
          puts("큐가 가득 차 있습니다!");
      }
      else
      {
        if (QueueIsEmpty(&line))
          puts("삭제할 것이 남아 있지 않습니다!");
        else
        {
          DeQueue(&temp, &line);
          printf("큐에서 %d삭제\n", temp);
        }
      }

      printf("큐에는 %d개의 항목이 들어 있습니다.\n", QueueItemCount(&line));
      puts("추가하려면 a, 삭제하려면 d, 끝내려면 q를 입력하시오.");
    }
  
  EmptyTheQueue(&line);
  puts("끝");
  
  return 0;
}
