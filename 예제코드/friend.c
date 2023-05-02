// friend.c -- 중첩된 구조체를 사용한다.
#include <stdio.h>
#define LEN 20

// char* s_gets(char* st, int n);

const char* msgs[5] = 
{
  "훌룡한 저녁 대접에 감사드립니다.",
  "당신의 직업이",
  "라는 점은 당신이 정말 특별한 분이라는 것을 증명합니다.",
  "우리는 맛있는",
  "을 먹고 약간 웃는 것 이상으로 함께했음에 틀림이 없습니다."
};

struct namas  // 첫 번째 구조체
{
  char first[LEN];
  char last[LEN];
};

struct guy  // 두 번째 구조체
{
  struct namas handle;  // 중첩된 구조체
  char favfood[LEN];
  char job[LEN];
  float income;
};

int main(void)
{
  struct guy fellow = 
  {
    {"Ewen", "Villard"},
    "훈제 연어",
    "성격 코치",
    68112.00
  };

  printf("친애하는 %s, \n\n", fellow.handle.first);
  printf("%s%s\n", msgs[0], fellow.handle.first);
  printf("%s%s.\n", msgs[1], fellow.job);
  printf("%s\n", msgs[2]);
  printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);

  if (fellow.income > 150000.00)
    puts("!!");
  else if (fellow.income > 75000.0)
    puts("!");
  else
    puts(".");
  printf("\n%40s%s\n", "", "또 뵈어요,");
  printf("%40s%s\n", "", "shalala");

  return 0;
}

// char* s_gets(char* st, int n)
// {
//   char* ret_val;
//   char* find;

//   ret_val = fgets(st, n, stdin);
//   if (ret_val)
//   {
//     find = strchr(st, '\n');  // 개행을 찾는다.
//     if (find)                 // 주소가 NULL이 아니면,
//       *find = '\0';           // null 문자를 거기에 둔다.
//   }
//   else
//   {
//     while (getchar () != '\n')
//       continue;               // 행의 나머지를 삭제
//   }

//   return ret_val;
// }
