#include <stdio.h>

int main() {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number의 값 : %d\n", number);

	pNumber = &number;
	*pNumber = pNumber + 5;
	printf("number의 값 : %d, %d, %p\n", number, *pNumber, *pNumber);

	return 0;
}