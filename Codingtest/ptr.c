#include <stdio.h>

int main() {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number�� �� : %d\n", number);

	pNumber = &number;
	*pNumber = pNumber + 5;
	printf("number�� �� : %d, %d, %p\n", number, *pNumber, *pNumber);

	return 0;
}