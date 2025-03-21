<<<<<<< HEAD
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
	
=======
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct user
{
	char id[40]; //ex) sample12@naver.com
	char pw[50]; //ex) koreaedu1384!@
	char gender; // 'M' , 'F'
};
//위의 구조체 user를 이용해 다음과 같은 출력 화면을 완성하세요.

//아이디를 입력해주세요 : sample12@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//성별을 입력해주세요(M,F) : M
//아이디를 입력해주세요 : sample13@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
// //성별을 입력해주세요(M,F) : F
//아이디를 입력해주세요 : sample14@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//성별을 입력해주세요(M,F) : M

//유저 테이블 
//=======================================
//1. sample12@naver.com koreaedu1384!@  M
//2. sample13@naver.com koreaedu1384!@  F
//3. sample14@naver.com koreaedu1384!@  M
//=======================================
int main()
{
	//같은 데이터의 반복 -> 배열 + for문 접근하기 너무 좋다.
	struct user table[3];

	//배열의 개수만큼 반복 시도
	for (int i = 0; i < 3; i++)
	{
		printf("아이디를 입력해주세요 :");
		scanf("%s", table[i].id);
		//id는 char[] 따라서 & 쓰지 않는다.
		getchar();

		//문장 다음 문자/ 문장 입력? getchar()

		printf("비밀번호를 입력해주세요 : ");
		scanf("%s", table[i].pw);
		getchar();

		printf("성별을 입력해주세요(M,F) :");
		scanf("%c", &table[i].gender);
		//gender는 char 따라서 & 쓴다.
		getchar();
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s %s %c \n", i + 1, table[i].id, table[i].pw, table[i].gender);
	}

>>>>>>> dba111590fe992ed376285767b8cef1f937e9487

	return 0;
}