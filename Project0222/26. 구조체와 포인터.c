#include <stdio.h>

<<<<<<< HEAD
//�����͸� �̿��� ����ü�� ����غ��ô�.

struct item
{
	int code; //������ �ڵ�(������ �ĺ�)
=======
//�����͸� �̿��� ����ü�� ����غ��ϴ�.

struct item
{
	int code; //������ �ڵ�(������ �ĺ���)
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
	char name[30];
	char description[50];
};

int main()
{
	//����ü ������ ����
	//struct ����ü�� *������;
	struct item *item01;

<<<<<<< HEAD
	struct item item02 = { 2,"FBSX-0479","PLUG IN BRIDGE" };
=======
	struct item item02 = { 2, "FBSX-0479","PLUG IN BRIDGE" };
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487

	//����ų �ּҰ��� ����
	item01 = &item02;

<<<<<<< HEAD
	//�����ͷ� ����Ų ���� ������ ����ü��.�������� �ƴ� ����ü�� ->���������� �ٲ�Ե˴ϴ�.
	//���������� ����Ű���ִ� ���� ->�� ����ϰ� �־ �����ϱ� ����.
	printf("�ڵ� : %d �̸� : %s %s", item01->code, item01->name, item01->description);
=======
	//�����ͷ� ����Ų ���� ������ ����ü��.�������� �ƴ� ����ü��->���������� �ٲ�� �˴ϴ�.
	//���������� ����Ű�� �ִ� ���� ->�� ����ϰ� �־ �����ϱ� �����ϴ�.
	printf("�ڵ� : %d �̸� : %s  %s", item01->code, item01->name, item01->description);

>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
	return 0;
}