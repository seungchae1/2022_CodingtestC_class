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
	// 포인터의 값 활용 끝
	printf("%d\n", *pz);
	return 0;
}