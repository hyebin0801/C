#include <stdio.h>

//{1,2,3,4} 중에서 숫자 2개를 뽑아 합이 6이 초과하는 경우의 수를 모두 출력하시오,


int arr[] = { 1,2,3,4 };

void Backtraking(int N, int M, int idx, int sum)
{
	if (M == 2)
	{
		if (sum > 6)
		{
			printf("%d %d", arr[idx - 1], arr[idx - 2]);
		}
	}
}

int main() 
{



	return 0;
}