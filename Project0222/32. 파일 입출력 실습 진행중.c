#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //system

//1.파일을 이용해 세이브/로드 기능을 보일 수 있는 파일을 구현하세요
//세이브 : 현재의 작업 상태를 파일에 저장하는 것을 의미합니다.
//로드 : 파일에 있는 데이터를 불러오는것을 의미합니다.

//ex. 1. 레벨업 기능을 구현해서 플레이어의 레벨이 1 상승했습니다.
//    2. 현재 플레이어의 능력치는 레벨 1 힘 5 민 5 지 5 행 5 입니다.
//    3. 세이브 기능을 사용할 경우 해당 정보가 저장됩니다.
//    4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 reset됩니다.
//    5. 이 상태에서 로드를 누를 경우 위에 저장해둔 정보가 다시 플레이어의 능력치로 설정됩니다.


int main()
{
	FILE* fp = NULL;

	int level;
	int him;
	int min;
	int ji;
	int hang;

	
	fp = fopen("program_data.txt", "w");

	if (fp == NULL)
	{
		printf("failed file open....\n");
	}


		printf("레벨,힘,민,지,행을 순서대로 입력해주세요.\n ");


		scanf("%d %d %d %d %d ", &level, &him, &min, &ji, &hang);


		fprintf(fp, "레벨 %d, 힘%d, 민%d, 지%d, 행 %d\n", level,him,min,ji,hang);



	//작업종료
	fclose(fp);
	

	/*
	fp = fopen("program_data.txt", "r"); //위명령어로 파일 생성 후 진행가능.

	if (fp == NULL)
	{
		printf("파일읽기 실패\n");


		fscanf(fp, "%d %d %d %d %d", level, him, min, ji, hang);
		printf("%d %d %d %d %d ", &level, &him, &min, &ji, &hang);

		/*
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

			return 0;
		}
		*/
		return 0;
	}
}