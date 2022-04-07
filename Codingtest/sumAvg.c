#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, sum = 0;
	int arr[10];
	double avg;
	srand(time(NULL)); //srand를 이용해 랜덤값을 추출

	for ( i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		arr[i] = (rand() % 100) + 1;
		printf("%d\t", arr[i]);
		sum += arr[i];
	}
	avg = (double)sum / 10;
	printf("\n");
	printf("합계는 : %d\t", sum);
	printf("평균은 : %.2lf", avg);

	return 0;
}