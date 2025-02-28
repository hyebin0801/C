#include <stdarg.h> //가변인자 제공
#include <math.h> //수학 기능 제공

int main()
{

	printf("root 4 = %.2f\n", sqrt(4));

	//1. x제곱 - 2x = 2를 풀이하시오.
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a, b, c);
	//힌트 : 2차 방정식을 풀기위해서는 근의 공식을 이용해봅니다.

	return 0;
}