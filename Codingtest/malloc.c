#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi = NULL;

	//�޸Ӹ� �Ҵ� �Լ� malloc()���� ���� �޸� �Ҵ�
	pi = (int*)malloc(sizeof(int));

	//���� �޸� �Ҵ� ���� �˻�
	if (pi == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}
	*pi = 3;
	printf("�ּҰ� : *pi = %d, ���尪  :p = %d\n", pi, *pi);

	//�޸� ����
	free(pi);

	return 0;
}