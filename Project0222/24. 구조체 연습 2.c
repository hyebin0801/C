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
	struct user s1;

	
	printf("아이디를 입력해주세요 : ");
	scanf("%s", &s1.id);
	printf("비밀번호를 입력해주세요 : " );
	scanf("%s", &s1.pw);
	getchar();
	printf("성별을 입력해주세요(M,F): ");
	scanf("%c", &s1.gender);

	printf("아이디를 입력해주세요 : %s \n", &s1.id);
	printf("비밀번호를 입력해주세요 : %s\n", &s1.pw);
	printf("성별을 입력해주세요 : %c\n", s1.gender);

	

	struct user s2;


	printf("아이디를 입력해주세요 : ");
	scanf("%s", &s2.id);
	printf("비밀번호를 입력해주세요 : ");
	scanf("%s", &s2.pw);
	getchar();
	printf("성별을 입력해주세요(M,F): ");
	scanf("%c", &s2.gender);

	printf("아이디를 입력해주세요 : %s \n", &s2.id);
	printf("비밀번호를 입력해주세요 : %s\n", &s2.pw);
	printf("성별을 입력해주세요 : %c\n", s2.gender);

	struct user s3;


	printf("아이디를 입력해주세요 : ");
	scanf("%s", &s3.id);
	printf("비밀번호를 입력해주세요 : ");
	scanf("%s", &s3.pw);
	getchar();
	printf("성별을 입력해주세요(M,F): ");
	scanf("%c", &s3.gender);

	printf("아이디를 입력해주세요 : %s \n", &s3.id);
	printf("비밀번호를 입력해주세요 : %s\n", &s3.pw);
	printf("성별을 입력해주세요 : %c\n", s3.gender);
	

	return 0;
}