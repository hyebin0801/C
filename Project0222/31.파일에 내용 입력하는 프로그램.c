#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	//1.파일 포인터 작성
	FILE* fp = NULL; //파란색이니 FILE은 구조체

	//2. 파일에 입력할 데이터에대한 정의
	char name[20];
	int age;
	double height; //float는 오차범위가 있어 double을 써줌. double은 lf
	
	/*
	fp = fopen("user_info.txt", "w");

	
	
	//3.파일 오픈 유무 체크
	if (fp == NULL)
	{
		printf("failed file open....\n");
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 유저의 정보를 입력해주세요(나이,이름,키) : ", i + 1);
		scanf(" %d %s %lf", &age, name, &height);

		//파일에 출력을 진행하는 문법(fprintf)
		fprintf(fp, " %d %s %lf\n", age, name, height);

		
	}
	//작업종료
	fclose(fp);
	*/

	
	fp = fopen("user_info.txt", "r"); //위명령어로 파일 생성 후 진행가능.

	if (fp == NULL)
	{
		printf("파일읽기 실패\n");
		
	}
	printf("번호\t나이\t이름\t키\n");

	for (int i = 0; i < 5; i++)
	{
		fscanf(fp, " %d %s %lf", &age, name, &height);
		printf("%d\t%2d\t%4s\t%3.2lf\n",i+1, age, name, height);
	}
	
	//\t는 tab기능
	//%2d :간격 2칸 %3.2lf는 간격 3칸, 소수점 2자리

	//fprintf는 파일에 입력한 정보를 출력해주는 기능. (파일로의 입력)

	//fscanf는 파일에있는 내용을입력해주는 기능 (파일로부터의 입력(
	return 0;
}