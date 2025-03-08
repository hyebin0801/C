#define _CRT_SECURE_NO_WARNINGS // (scanf)
#include <stdio.h> //(printf,scanf)
#include <string.h>//문자열

struct user
{
	char id[40]; //sample12@naver.com
	char pw[50]; //koreaedu1384!
	char gender;//'M' , 'F'
};

//uer를 이용해 다음과같은 화면을 완성하세요

//아이디를 입력해주세요: sample12@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!
// 성별을 입력해주세요(M,F):M
//아이디를 입력해주세요 : sample13@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!
// 성별을 입력해주세요(M,F):F
//아이디를 입력해주세요 : sample14@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!
// 성별을 입력해주세요(M, F) :M
//=유저테이블=
//1. sample12@naver.com koreaedu1384! M
//2. sample13@naver.com koreaedu1384! F
//3. sample14@naver.com koreaedu1384! M

int main()
{
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("아이디를 입력해주세요:");
		scanf("%s", table[i].id);
		getchar();

		printf("비밀번호를 입력해주세요 :");
		scanf("%s", table[i].pw);
		getchar();

		printf(" 성별을 입력해주세요(M, F) :");
		scanf("%c", &table[i].gender); //char = &로 표기
		getchar();

	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s %s %c\n", i + 1, table[i].id, table[i].pw, table[i].gender);
	}

	return 0;
}