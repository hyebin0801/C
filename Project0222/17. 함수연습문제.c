#include <stdio.h>//����� ����
#include <stdarg.h>//���� ���� ����
#include <math.h> //���� ��� ����


//���ڰ� 1,2,3���� ������ st, nd, rd
//1,2,3 ���� ���ڰ� 1�� ���� th ex) 111th, 112th

void Quadformula(double a, double b, double c)
{
	//-b +- (sqrt(pow(b,2)-4*a*c)) / 2*a
}

void printRank(int rank)
{
	printf("%d", rank);

	if (rank % 10 == 1)
	{
		printf("st\n");
	}
	else if (rank % 10 == 2)
	{
		printf("nd\n");
	}
	else if (rank % 10 == 3)
	{
		printf("rd\n");
	}
	else
	{
		printf("th\n");
	}
}

float average(int count, ...)
{
	float sum = 0;
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum / count;
}

void isOdd(int number)
{
	if (number % 2 == 0)
	{
		printf("NO\n");
	}
	else
		printf("YES\n");
}

int main()
{
<<<<<<< HEAD

	printf("root 4 = %.2f\n", sqrt(4));

<<<<<<< HEAD
	//1.x���� - 2x = 2�� Ǯ���Ͻÿ�.
=======
	//1. x���� - 2x = 2�� Ǯ���Ͻÿ�.
>>>>>>> 3f98e39fbabaf39644eb50f64a5f708075bbdf46
=======
	//printf("root 4 = %.2f\n", sqrt(4));
	////1. x�� - 2x = 2�� Ǯ���Ͻÿ�.
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a, b, c);
	//��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ϴ�.

<<<<<<< HEAD


	//2. ���� ������ �����ϴ� printRank�� �����ϼ���
=======
	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd
	//1st, 2nd, 3rd, 4th ,... 





	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	float result1 = average(3, 100, 95, 90);   //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	printf("%.2f\n", result1);
	printf("%.2f\n", result2);
	//��Ʈ) printf("%.2f, value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����

<<<<<<< HEAD
	//3�� ����
	printf("3�� ���� : %2.f , %2.f", result1, result2);
		
	//4. ���� ������ �����ϴ� isOdd�� �����ϼ���
=======
	//4.���� ������ �����ϴ� isOdd�� �����ϼ���.
>>>>>>> dba111590fe992ed376285767b8cef1f937e9487
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5.���� ������ �����ϴ� getPrime�� �����ϼ���.

	/ for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�� ���� �Ҽ��Դϴ�.\n");
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�/\n");
		}
	}
	return 0;
}