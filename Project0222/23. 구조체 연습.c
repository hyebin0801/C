#define _CRT_SECURE_NO_WARNINGS // (scanf)
#include <stdio.h> //(printf,scanf)
#include <string.h>//���ڿ�

//����ü�� �̿��� �� ��� ������ϼ��ϼ���

//��°��
//p2�� ��ǥ�� 10, 10 �Դϴ�.
//p1�� p2�� ��ǥ�� ���� �����ϴ�.

//��Ʈ1 : ��ǥ������ point�� ����
//��Ʈ2 : ���ǹ��� �̿��� ������ �񱳸� ����

/*
int b;

for (int a = int b;)
{
	printf("p1�� p2�� ��ǥ�� ���� �����ϴ�.");
}
	else
	{
		printf("�� ���� ���� �ٸ��ϴ�.");
	}


int main()
{

	inta
	int b = 10;

	printf("p2�� ��ǥ�� 10�Դϴ�. ");



	return 0;
}
*/

struct point
{
	int x;
		int y;
};

int main()

{

	struct point p1 = { 10,10 };
	struct point p2 = { 10,10 };

	printf("p2�� ��ǥ�� %d, %d�Դϴ�.\n", p2.x, p2.y);

	if (p1.x == p2.x && p1.y == p2.y) {
		printf("p1�� p2�� ��ǥ�� ���� �����ϴ�.\n");

	}
	else
	{
		printf("p1�� p2�� ��ǥ�� ���� �ٸ��ϴ�.");
	}

	return 0;
}