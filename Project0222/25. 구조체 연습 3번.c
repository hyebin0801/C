#define _CRT_SECURE_NO_WARNINGS // (scanf)
#include <stdio.h> //(printf,scanf)
#include <string.h>//���ڿ�

struct student
{
	int id;
	char name[20];
};

void compare(struct student s1, struct student s2)
{
	//d���̵𿡴��� ��(���������� ��)�� ��ġ�ϰ�, �̸��� ���� ��(���ڿ������� �񱳰� ��ġ�ϴ� ���)
	if (s1.id == s2.id && strcmp(s1.name, s1.name) == 0)
	{
		printf("���� �� �Դϴ�.");
	}
}

int main()
{
	struct student s1 = { 1,"kane"};
	struct student s2 = { 1,"kane"};

	compare(s1, s2);
	//�ش� �ڵ带 ���������� s1�� s2�� ���� ���� ���̶�� "���� ���Դϴ�."�� �������� �Լ� compare�� �����Ͻÿ�

	//��Ʈ
	//int a = function(1); �̷������� �����ų� pintf(function1)); �̷������� ������ return�Լ�
	//function(1);�̷������� �Լ��� ���������� �Ϲ� �Լ� (void)�Դϴ�.



	return 0;
}