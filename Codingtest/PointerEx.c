#include <stdio.h>

int main() {
	int number = 100;
	printf("number�� �ּ� %p �� : %d", &number, number);

	int n = 5; //n�̶�� �̸��� ������ ����, ���� 5�� ����
	printf("n�� �� : %d\n", n); //5
	int* ptr = &n; //ptr n�� �ּҸ� ����Ű�� �����ͷ� ����
	printf("n�� �� : %d\n", *ptr); //5
	*ptr = 10; //ptr�� ����Ű�� n�� 10�� ����
	// ��, n�� �� 5�� 10���� ��ü
	printf("n�� �� : %d\n", n); //10

	return 0;
}