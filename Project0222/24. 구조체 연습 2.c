<<<<<<< HEAD
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
//���� ����ü user�� �̿��� ������ ���� ��� ȭ���� �ϼ��ϼ���.

//���̵� �Է����ּ��� : sample12@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//������ �Է����ּ���(M,F) : M
//���̵� �Է����ּ��� : sample13@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
// //������ �Է����ּ���(M,F) : F
//���̵� �Է����ּ��� : sample14@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//������ �Է����ּ���(M,F) : M

//���� ���̺� 
//=======================================
//1. sample12@naver.com koreaedu1384!@  M
//2. sample13@naver.com koreaedu1384!@  F
//3. sample14@naver.com koreaedu1384!@  M
//=======================================
int main()
{
	//���� �������� �ݺ� -> �迭 + for�� �����ϱ� �ʹ� ����.
	struct user table[3];

	//�迭�� ������ŭ �ݺ� �õ�
	for (int i = 0; i < 3; i++)
	{
		printf("���̵� �Է����ּ��� :");
		scanf("%s", table[i].id);
		//id�� char[] ���� & ���� �ʴ´�.
		getchar();

		//���� ���� ����/ ���� �Է�? getchar()

		printf("��й�ȣ�� �Է����ּ��� : ");
		scanf("%s", table[i].pw);
		getchar();

		printf("������ �Է����ּ���(M,F) :");
		scanf("%c", &table[i].gender);
		//gender�� char ���� & ����.
		getchar();
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s %s %c \n", i + 1, table[i].id, table[i].pw, table[i].gender);
	}

>>>>>>> dba111590fe992ed376285767b8cef1f937e9487

	return 0;
}