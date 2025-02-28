#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

int main()
{
	//2. 다음 조건을 만족하는 printRank를 구현하세요
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd

	return 0;
}