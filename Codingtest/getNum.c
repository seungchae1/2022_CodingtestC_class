#include <stdio.h>
#include <time.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num, i;

	//�Է¹ޱ�
	while (1) {
		scanf_s("%d", &num);
		if ((num >= 1 && num<=10)) break;
	}

	for (i = 0; i < 10; i++)
	{
		if (num == arr[i]) break;
	}
	printf("%d�� %d��° ��ġ�� �ִ�.\n", num, ++i);


	//������ ����
	srand(time(NULL)); //�Ź� ������ ���� ����
	num = (rand() % 10) + 1;

	for (i = 0; i < 10; i++)
	{
		if (num == arr[i]) break;
	}
	printf("%d�� %d��° ��ġ�� �ִ�.\n", num, ++i);
}