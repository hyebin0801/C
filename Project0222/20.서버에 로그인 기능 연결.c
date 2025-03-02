#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef void(*callback)(void);

//2. 콜백 함수에대한 설정을 진행할 함수 정의
void setCallback(callback);

//3. 콜백 함수에대한 사용을 진행할 함수 정의
void useCallback(void);

//4. 사용자가 쓸 함수에대한 정의
void useFunction(void);

//5. 콜백에 대한 전역 변수 선언
callback user_callback = NULL;


int main()
{
	
	int a = a1234;
	printf("아이디를 입력합니다.\n");
	useCallback();

	//콜백 함수 설정(함수 포인터)
	setCallback(useFunction);

	printf("비밀번호를 입력합니다. \n");
	useCallback();
	return 0;
}

void setCallback(callback fp)
{
	user_callback = fp;
}

void useCallback(void)
{
	//user_callback에 값이 설정되어있으면
	if (useCallback == int a)
	{
		//콜백 함수를 실행한다/
		user_callback();
	}
	else 
	{
		//아닌 경우라면 메세지만 전달합니다.
		printf("아이디 또는 비밀번호가 잘못되었습니다.\n");
	}
}

void useFunction(void)
{
	printf("서버에 연결을 성공했습니다!");
}
