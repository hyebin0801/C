<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS // (scanf)
#include <stdio.h> //(printf,scanf)
#include <string.h>//문자열

//구조체를 이용해 음 출력 결과를완성하세요

//출력결과
//p2의 좌표는 10, 10 입니다.
//p1과 p2의 좌표는 서로 같습니다.

//힌트1 : 좌표에대한 point를 설계
//힌트2 : 조건문을 이용한 변수의 비교를 진행

/*
int b;

for (int a = int b;)
{
	printf("p1과 p2의 좌표는 서로 같습니다.");
}
	else
	{
		printf("두 값이 서로 다릅니다.");
	}


int main()
{

	inta
	int b = 10;

	printf("p2의 좌표는 10입니다. ");



	return 0;
}
*/
=======
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//구조체를 이용해 다음 출력 결과를 완성하세요.
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487

struct point
{
	int x;
<<<<<<< HEAD
		int y;
};

int main()

{

	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };

	printf("p2의 좌표는 %d, %d입니다.\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y) {
		printf("p1과 p2의 좌표는 서로 같습니다.\n");

	}
	else
	{
		printf("p1과 p2의 좌표는 서로 다릅니다.");
=======
	int y;
};
//출력 결과
//p2의 좌표는 10, 10입니다.
//p1과 p2의 좌표는 서로 같습니다.

//힌트 1: 좌표에 대한 구조체 point를 설계합니다.
//힌트 2: 조건문을 이용한 변수의 비교를 진행해봅니다.
int main()
{
	struct point p1 = { 10,10 };
	struct point p2 = { 10, 10 };

	printf("p2의 좌표는 %d, %d입니다.\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1과 p2의 좌표는 서로 같습니다.\n");
	}
	else
	{
		printf("p1과 p2의 좌표는 서로 다릅니다.\n");
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
	}

	return 0;
}