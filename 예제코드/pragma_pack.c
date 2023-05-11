// pragma pack() 사용 예시를 보여준다. (매우 중요함)
#include <stdio.h>

typedef struct test1
{
	char c;
	int i;
}test1;

#pragma pack(push, 1)

typedef struct test2
{
	char c;
	int i;
}test2;

#pragma pack(pop)

typedef struct test3
{
	char c;
	int i;
}test3;
int main()
{
	test1 t1;
	test2 t2;
	test3 t3;
	printf("struct size : %d\r\n", sizeof(t1)); // struct size : 8
	printf("struct size : %d\r\n", sizeof(t2)); // struct size : 5
	printf("struct size : %d\r\n", sizeof(t3)); // struct size : 8
}
