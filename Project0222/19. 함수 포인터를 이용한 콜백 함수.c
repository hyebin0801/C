#include <stdio.h>

//�ݹ� �Լ�(callback)�� �ٸ� �ڵ��� �μ��� �Ѱ��ִ� ���� ������ �ڵ带 �ǹ��մϴ�.
<<<<<<< HEAD
//�ݹ����� �Ѱܹ��� �ڵ�� ���迡���� ��� �����ϰų�, ���߿� �����ϴ°� �����մϴ�.
//Ư�� �̺�Ʈ�� �߻������� ����ڰ� ���ϴ� ����� �����ϵ��� �ϱ����� �뵵�� �����մϴ�.

//�ݹ� �Լ��� ����� ���
//1. �ݹ� �Լ��� ���� ����
//typdef�� �ڷ��� ��� ������ �̸�����, ��� ǥ���� �� �ְ� �����ִ� ����Դϴ�.
typedef void(*callback)(void);

//2. �ݹ� �Լ������� ������ ������ �Լ� ����
void setCallback(callback);

//3. �ݹ� �Լ������� ����� ������ �Լ� ����
void useCallback(void);

//4. ����ڰ� �� �Լ������� ����
=======
//�ݹ����� �Ѱܹ��� �ڵ�� ���迡 ���� ��� �����ϰų�, ���߿� �����ϴ°� �����մϴ�.
//Ư�� �̺�Ʈ�� �߻����� ��, ����ڰ� ���ϴ� ����� �����ϵ��� �ϱ� ���� �뵵�� �����մϴ�.

//�ݹ� �Լ��� ����� ���
//1. �ݹ� �Լ��� ���� ����
//typedef�� �ڷ��� ��� ������ �̸�����, ��� ǥ���� �� �ְ� �����ִ� ����Դϴ�.
typedef void (*callback)(void);
//2. �ݹ� �Լ��� ���� ������ ������ �Լ� ����
void setCallback(callback);
//3. �ݹ� �Լ��� ���� ����� ������ �Լ� ����
void useCallback(void);
//4. ����ڰ� �� �Լ��� ���� ����
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
void useFunction(void);

//5. �ݹ鿡 ���� ���� ���� ����
callback user_callback = NULL;

int main()
{
	printf("�ݹ� �Լ� ���� �� ȣ�� ����\n");
	useCallback();

	//�ݹ� �Լ� ����(�Լ� ������)
	setCallback(useFunction);

	printf("�ݹ� �Լ� ���� �� ȣ�� ����\n");
	useCallback();
<<<<<<< HEAD
	return 0;
}
// 6. �Ʒ��� �Լ� ����
=======

	return 0;
}
//6. �Ʒ��� �Լ� ����
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
void setCallback(callback fp)
{
	user_callback = fp;
}

void useCallback(void)
{
<<<<<<< HEAD
	//user_callback�� ���� �����Ǿ��֤���
	if (user_callback)
	{
		//�ݹ� �Լ��� �����Ѵ�/
=======
	//user_callback�� ���� �����Ǿ��ִٸ�
	if (user_callback)
	{
		//�ݹ� �Լ��� �����մϴ�.
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
		user_callback();
	}
	else
	{
		//�ƴ� ����� �޼����� �����մϴ�.
		printf("None Callback\n");
	}
}

void useFunction(void)
{
<<<<<<< HEAD
	printf("callback function completed");
=======
	printf("callback function completed\n");
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
}
