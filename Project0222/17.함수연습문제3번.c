#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

int main()
{
	//3. 다음 조건을 만족하는 average를 구현하세요.
	float result1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	//힌트 printf("%2.f",value)를 활용하면 소수점 2자리까지 출력 가능

	return 0;
}