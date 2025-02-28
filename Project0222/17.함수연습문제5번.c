#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

int main()
{
	//5. 다음 조건을 만족하는 getPrime을 구현하세요
	for (int i = 1; i <= 10; i++);
	{
		if (getPrime(i) == 1)
		{
			printf("이 값은 소수입니다.");
		}
		else
		{
			printf("이 값은 소수가 아닙니다.");
		}
	}


	return 0;
}