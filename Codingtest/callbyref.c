#include <stdio.h>

int* add(int x, int y) 
{
	int sum = x + y;
	return &sum;
}

int main()
{
	int x = 5, y = 7;
	int* pz;
	pz = add(x, y);
	printf("%d\n", *pz);
	// �������� �� Ȱ�� ��
	printf("%d\n", *pz);
	return 0;
}