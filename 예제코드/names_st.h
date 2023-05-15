// names_st.h -- 구조체 names_st를 선언한 헤더 파일
// 상수
#include <string.h>
#define SLEN 32

// 구조체 선언
struct names_st
{
  char first[SLEN];
  char last[SLEN];
};

// typedef으로 만드는 새로운 데이터형 이름
typedef struct names_st names;

// 함수 프로토타입
void get_names(names *);
void show_names(const names *);

char * s_gets(char* st, int n);
