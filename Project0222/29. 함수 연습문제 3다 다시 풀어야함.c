#include <stdio.h>

//{1,2,3,4} �߿��� ���� 2���� �̾� ���� 6�� �ʰ��ϴ� ����� ���� ��� ����Ͻÿ�,


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