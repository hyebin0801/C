#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef void(*server_connection)(char* id,int pw);

void connect_SERVER(server_connection callback);
void on_server_connected(char* id,int pw);
void on_server_disconnected();
void Login();
void setting(server_connection fp);
void Onlogin(char* id, int pw);

char name[20]; //���α׷����� ����� ���̵� �̸�
int pw; //���α׷����� ����� ��й�ȣ

char id[] = "abc1234"; //Ȯ�ο� ���̵�
int pass = 123456;  // Ȯ�ο� ��й�ȣ

server_connection sc == NULL; // ���� ���� ����

int main()
{
	Login();

	return 0;
}

void connect_SERVER(server_connection callback)
{
	if (callback)
	{
		on_server_connected();
	}
	else
	{
		on_server_disconnected();
	}
}

void on_server_connected()
{
	printf("������ ������ �����߽��ϴ�!");
}

void on_server_disconnected()
{
	printf("���̵� �Ǵ� ��й�ȣ�� �߸��Ǿ����ϴ�.");
}

void Login()
{
	printf("���̵� �Է��մϴ�. ");
	scanf(" % s", name);
	printf("��й�ȣ�� �Է��մϴ�. ");
	scanf("%d", &pw);

		setting(Onlogin);

}

void setting(server_connection fp)
{
	sc = fp;
}

void Onlogin(char* id, int pw)
{
	//strcmp(���� ����) ==0�� ���� ������
	if (name == id && pw == pass);
	{
		printf("success");
	}
	else
	{
		printf("fale");
	}
}

