#include <stdio.h>

//#�� 20�� ȭ�鿡 ����ϴ� �Լ�
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c",ch);
	}
}

//¦������ Ȧ������ �Ǻ�, Ű���� �Է�x

int main() {
	display(20, '#');

	return 0;
}