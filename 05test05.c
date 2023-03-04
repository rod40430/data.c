// 5. 다음은 리스트 5.9를 조금 다르게 설계한 프로그램이다. 리스트 5.9에 있는 두개의 scanf()문을
// 하나의 scsnf()문으로 대체함으로써 코드를 단순하게 하려고 시도한 것으로 보인다. 무엇이 이 설계를
// 리스트 5.9보다 못하게 만들었을까?
// #include <stdio.h>
// #define S_TO_M 60

// int main(void)
// {
//   int sec, min, left;
  
//   printf("이 프로그램은 초 수로만 주어지는 시간을");
//   printf("분 수와 초 수로 변환한다.\n");
//   printf("초 수를 입력하시오.\n");
//   printf("프로그램을 종요하라면 0을 입력하시오.\n");
//   while (sec > 0)
//     {
//       scanf("%d", &sec);
//       min = sec / S_TO_M;
//       left = sec % S_TO_M;
//       printf("%d초는 %d분, %d초입니다.\n", sec, min, left);
//       printf("다음 입력은?\n");
//     }
//   printf("안녕!\n");

//   return 0;
// }

// 정답
#include <stdio.h>
#define S_TO_M 60

int main(void)
{
  int sec, min, left;
  sec = 1;
  printf("이 프로그램은 초 수로만 주어지는 시간을");
  printf("분 수와 초 수로 변환한다.\n");
  printf("초 수를 입력하시오.\n");
  printf("프로그램을 종요하라면 0을 입력하시오.\n");
  scanf("%d", &sec);
  while (sec > 0)
    {
      min = sec / S_TO_M;
      left = sec % S_TO_M;
      printf("%d초는 %d분, %d초입니다.\n", sec, min, left);
      printf("다음 입력은?\n");
      scanf("%d", &sec);
    }
  printf("안녕!\n");

  return 0;
}