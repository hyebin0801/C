#include <stdarg.h> //�������� ����
#include <math.h> //���� ��� ����

int main()
{

	printf("root 4 = %.2f\n", sqrt(4));

	//1. x���� - 2x = 2�� Ǯ���Ͻÿ�.
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a, b, c);
	//��Ʈ : 2�� �������� Ǯ�����ؼ��� ���� ������ �̿��غ��ϴ�.

	return 0;
}