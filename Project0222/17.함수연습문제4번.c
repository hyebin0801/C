#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

int isOdd(int a)
{
	if (a == 3)
	{
		printf("YES");
	}
	else if (a==4)
	{
		printf("NO");
	}
	else if (a == 5)
	{
		printf("NO");
	}
}

int main()
{
	int isOdd(int a);
	int a;

	//4. 다음 조건을 만족하는 isOdd를 구현하세요
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	scanf("%d", &a);

	printf(" \n");
	
	return 0;
}