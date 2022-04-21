#include <stdio.h>

int main()
{
	char* pc = (char*)100;// 가능하나 잘 이용 x
	int* pi = (int*)100;
	double* pd = (double*)100;
	//pd =100; //경고 발생

	printf("%u %u %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1));
	printf("%u %u %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1));
	printf("%u %u %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1));

	return 0;
}