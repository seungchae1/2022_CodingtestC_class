#include <stdio.h>

int main() {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = arr[0];
	int min = arr[0];
	int position_max,position_min;
	for (int i = 1; i <10;  i++)
	{
		if (max < arr[i]) {
			max = arr[i];
			position_max = i + 1;
		}
		if (min > arr[i]) {
			min = arr[i];
			position_min = i + 1;
		}
	}
	printf("�ִ밪 : %d /��ġ : %d��°\n", max,position_max);
	printf("�ּҰ� : %d /��ġ : %d��°", min, position_min);

	return 0;
}