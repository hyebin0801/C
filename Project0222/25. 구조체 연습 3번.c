#define _CRT_SECURE_NO_WARNINGS // (scanf)
#include <stdio.h> //(printf,scanf)
#include <string.h>//문자열

struct student
{
	int id;
	char name[20];
};

void compare(struct student s1, struct student s2)
{
	//d아이디에대한 비교(정수끼리의 비교)가 일치하고, 이름에 대한 비교(문자열끼리의 비교가 일치하는 경우)
	if (s1.id == s2.id && strcmp(s1.name, s1.name) == 0)
	{
		printf("같은 값 입니다.");
	}
}

int main()
{
	struct student s1 = { 1,"kane"};
	struct student s2 = { 1,"kane"};

	compare(s1, s2);
	//해당 코드를 실행했을때 s1과 s2가 서로 같은 값이라면 "같은 값입니다."가 나오도록 함수 compare을 설계하시오

	//힌트
	//int a = function(1); 이런식으로 나오거나 pintf(function1)); 이런식으로 나오면 return함수
	//function(1);이런식으로 함수만 적혀있으면 일반 함수 (void)입니다.



	return 0;
}