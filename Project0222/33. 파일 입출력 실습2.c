#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //system

int main()
{
	FILE* fp = NULL;
	
	fp = fopen("program_data.txt", "r");

	int choice;
	//while(1)�ȿ� �ڵ带 �۾��ϸ� ��� �ݺ��˴ϴ�.
	while (1)
	{
		printf("1.��� ����");
		scanf("%d", &choice); //�Է��� ������ ���, �Է� ������� ��� ���°� �˴ϴ�.
		system("cls"); //�ش� ��ɾ �۾��ϸ� �ܼ�â�� �������ϴ�.

		if (choice == 0)
		{
			exit(0); //���α׷��� �����ϴ� �ڵ� \
									}
		}

		
	}
	
		return 0;
}
