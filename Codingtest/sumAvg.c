#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, sum = 0;
	int arr[10];
	double avg;
	srand(time(NULL)); //srand�� �̿��� �������� ����

	for ( i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		arr[i] = (rand() % 100) + 1;
		printf("%d\t", arr[i]);
		sum += arr[i];
	}
	avg = (double)sum / 10;
	printf("\n");
	printf("�հ�� : %d\t", sum);
	printf("����� : %.2lf", avg);

	return 0;
}