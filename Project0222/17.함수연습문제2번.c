#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

void printrank(int rank)
{
	if (rank == 1)
	{
		printf("1st");
	}
	else if (rank == 2)
	{
		printf("2nd");
	}
	else if (rank == 3)
	{
		printf("3rd");
	}
}

int main()
{

	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd

	scanf("%d", &rank);

	return 0;
}