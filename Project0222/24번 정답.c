#define _CRT_SECURE_NO_WARNINGS // (scanf)
#include <stdio.h> //(printf,scanf)
#include <string.h>//���ڿ�

struct user
{
	char id[40]; //sample12@naver.com
	char pw[50]; //koreaedu1384!
	char gender;//'M' , 'F'
};

//uer�� �̿��� ���������� ȭ���� �ϼ��ϼ���

//���̵� �Է����ּ���: sample12@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!
// ������ �Է����ּ���(M,F):M
//���̵� �Է����ּ��� : sample13@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!
// ������ �Է����ּ���(M,F):F
//���̵� �Է����ּ��� : sample14@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!
// ������ �Է����ּ���(M, F) :M
//=�������̺�=
//1. sample12@naver.com koreaedu1384! M
//2. sample13@naver.com koreaedu1384! F
//3. sample14@naver.com koreaedu1384! M

int main()
{
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("���̵� �Է����ּ���:");
		scanf("%s", table[i].id);
		getchar();

		printf("��й�ȣ�� �Է����ּ��� :");
		scanf("%s", table[i].pw);
		getchar();

		printf(" ������ �Է����ּ���(M, F) :");
		scanf("%c", &table[i].gender); //char = &�� ǥ��
		getchar();

	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s %s %c\n", i + 1, table[i].id, table[i].pw, table[i].gender);
	}

	return 0;
}