#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //system

//1.������ �̿��� ���̺�/�ε� ����� ���� �� �ִ� ������ �����ϼ���
//���̺� : ������ �۾� ���¸� ���Ͽ� �����ϴ� ���� �ǹ��մϴ�.
//�ε� : ���Ͽ� �ִ� �����͸� �ҷ����°��� �ǹ��մϴ�.

//ex. 1. ������ ����� �����ؼ� �÷��̾��� ������ 1 ����߽��ϴ�.
//    2. ���� �÷��̾��� �ɷ�ġ�� ���� 1 �� 5 �� 5 �� 5 �� 5 �Դϴ�.
//    3. ���̺� ����� ����� ��� �ش� ������ ����˴ϴ�.
//    4. ���� �ϱ� ����� ���� ��� �÷��̾��� �ɷ�ġ�� reset�˴ϴ�.
//    5. �� ���¿��� �ε带 ���� ��� ���� �����ص� ������ �ٽ� �÷��̾��� �ɷ�ġ�� �����˴ϴ�.


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


		printf("����,��,��,��,���� ������� �Է����ּ���.\n ");


		scanf("%d %d %d %d %d ", &level, &him, &min, &ji, &hang);


		fprintf(fp, "���� %d, ��%d, ��%d, ��%d, �� %d\n", level,him,min,ji,hang);



	//�۾�����
	fclose(fp);
	

	/*
	fp = fopen("program_data.txt", "r"); //����ɾ�� ���� ���� �� ���డ��.

	if (fp == NULL)
	{
		printf("�����б� ����\n");


		fscanf(fp, "%d %d %d %d %d", level, him, min, ji, hang);
		printf("%d %d %d %d %d ", &level, &him, &min, &ji, &hang);

		/*
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

			return 0;
		}
		*/
		return 0;
	}
}