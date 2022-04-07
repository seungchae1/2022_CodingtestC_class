#include <stdio.h>
#include <time.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num, i;

	//입력받기
	while (1) {
		scanf_s("%d", &num);
		if ((num >= 1 && num<=10)) break;
	}

	for (i = 0; i < 10; i++)
	{
		if (num == arr[i]) break;
	}
	printf("%d는 %d번째 위치에 있다.\n", num, ++i);


	//랜덤값 추출
	srand(time(NULL)); //매번 랜덤한 숫자 선택
	num = (rand() % 10) + 1;

	for (i = 0; i < 10; i++)
	{
		if (num == arr[i]) break;
	}
	printf("%d는 %d번째 위치에 있다.\n", num, ++i);
}