#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 5, b = 8;
	swap(&a, &b);
	printf("�Լ� ȣ�� �� : \n");
	printf("a : %d b : %d\n", a, b);
}