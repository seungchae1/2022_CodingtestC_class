#include <stdio.h>

int main() {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0];
	int position;
	for (int i = 1; i < 10; i++)
	{
		if (min > arr[i]) {
			min = arr[i];
			position = i + 1;
		}
	}
	printf("최대값 : %d \n위치 : %d번째", min, position);

	return 0;
}