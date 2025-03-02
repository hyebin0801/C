#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

void average(int count, ...)
{
	va_list args;
	
	va_start(args, count);
	
	for (int i = 1; i < count; i++)
	{
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args); //작업종료
}


int main()
{
	//3. 다음 조건을 만족하는 average를 구현하세요.
	float result1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	//힌트 printf("%2.f",value)를 활용하면 소수점 2자리까지 출력 가능


	//앞에 3,4값을 빼고 평균값을 내야함

	printf("%2.f", result1);
	printf("%2.f", result2);


	return 0;
}