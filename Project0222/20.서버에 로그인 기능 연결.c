#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef void(*callback)(void);

//2. �ݹ� �Լ������� ������ ������ �Լ� ����
void setCallback(callback);

//3. �ݹ� �Լ������� ����� ������ �Լ� ����
void useCallback(void);

//4. ����ڰ� �� �Լ������� ����
void useFunction(void);

//5. �ݹ鿡 ���� ���� ���� ����
callback user_callback = NULL;


int main()
{
	
	int a = a1234;
	printf("���̵� �Է��մϴ�.\n");
	useCallback();

	//�ݹ� �Լ� ����(�Լ� ������)
	setCallback(useFunction);

	printf("��й�ȣ�� �Է��մϴ�. \n");
	useCallback();
	return 0;
}

void setCallback(callback fp)
{
	user_callback = fp;
}

void useCallback(void)
{
	//user_callback�� ���� �����Ǿ�������
	if (useCallback == int a)
	{
		//�ݹ� �Լ��� �����Ѵ�/
		user_callback();
	}
	else 
	{
		//�ƴ� ����� �޼����� �����մϴ�.
		printf("���̵� �Ǵ� ��й�ȣ�� �߸��Ǿ����ϴ�.\n");
	}
}

void useFunction(void)
{
	printf("������ ������ �����߽��ϴ�!");
}
