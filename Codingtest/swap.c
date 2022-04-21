#include <stdio.h>

int main()
{
	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	int* p = &m;
	dummy = *p;
	m = n;
	n = dummy;

	printf("%d %d\n", m, n);
}