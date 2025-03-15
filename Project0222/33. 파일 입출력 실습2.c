#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //system

int main()
{
	FILE* fp = NULL;
	
	fp = fopen("program_data.txt", "r");

	int choice;
	//while(1)안에 코드를 작업하면 계속 반복됩니다.
	while (1)
	{
		printf("1.기능 선택");
		scanf("%d", &choice); //입력을 진행할 경우, 입력 전까찌는 대기 상태가 됩니다.
		system("cls"); //해당 명령어를 작업하면 콘솔창이 지워집니다.

		if (choice == 0)
		{
			exit(0); //프로그램을 종료하는 코드 \
									}
		}

		
	}
	
		return 0;
}
