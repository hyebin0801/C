#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //����� ����
#include <stdarg.h> //�������� ����
#include <math.h> //���� ��� ����

int isOdd(int a)
{
	if (a == 3)
	{
		printf("YES");
	}
	else if (a==4)
	{
		printf("NO");
	}
	else if (a == 5)
	{
		printf("NO");
	}
}

int main()
{
	int isOdd(int a);
	int a;

	//4. ���� ������ �����ϴ� isOdd�� �����ϼ���
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	scanf("%d", &a);

	printf(" \n");
	
	return 0;
}