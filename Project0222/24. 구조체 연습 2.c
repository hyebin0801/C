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
	struct user s1;

	
	printf("���̵� �Է����ּ��� : ");
	scanf("%s", &s1.id);
	printf("��й�ȣ�� �Է����ּ��� : " );
	scanf("%s", &s1.pw);
	getchar();
	printf("������ �Է����ּ���(M,F): ");
	scanf("%c", &s1.gender);

	printf("���̵� �Է����ּ��� : %s \n", &s1.id);
	printf("��й�ȣ�� �Է����ּ��� : %s\n", &s1.pw);
	printf("������ �Է����ּ��� : %c\n", s1.gender);

	

	struct user s2;


	printf("���̵� �Է����ּ��� : ");
	scanf("%s", &s2.id);
	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf("%s", &s2.pw);
	getchar();
	printf("������ �Է����ּ���(M,F): ");
	scanf("%c", &s2.gender);

	printf("���̵� �Է����ּ��� : %s \n", &s2.id);
	printf("��й�ȣ�� �Է����ּ��� : %s\n", &s2.pw);
	printf("������ �Է����ּ��� : %c\n", s2.gender);

	struct user s3;


	printf("���̵� �Է����ּ��� : ");
	scanf("%s", &s3.id);
	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf("%s", &s3.pw);
	getchar();
	printf("������ �Է����ּ���(M,F): ");
	scanf("%c", &s3.gender);

	printf("���̵� �Է����ּ��� : %s \n", &s3.id);
	printf("��й�ȣ�� �Է����ּ��� : %s\n", &s3.pw);
	printf("������ �Է����ּ��� : %c\n", s3.gender);
	

	return 0;
}