#include <stdio.h> //����� ����
#include <stdarg.h> //�������� ����
#include <math.h> //���� ��� ����

void average(int count, ...)
{
	va_list args;
	
	va_start(args, count);
	
	for (int i = 1; i < count; i++)
	{
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args); //�۾�����
}


int main()
{
	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	float result1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	//��Ʈ printf("%2.f",value)�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����


	//�տ� 3,4���� ���� ��հ��� ������

	printf("%2.f", result1);
	printf("%2.f", result2);


	return 0;
}