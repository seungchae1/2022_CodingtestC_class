#include <stdio.h>

//#�� 20�� ȭ�鿡 ����ϴ� �Լ�
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c",ch);
	}
}

//¦������ Ȧ������ �Ǻ�, Ű���� �Է�x
int isEven(int n) {
	return (n % 2 == 0 ? 1 : 0);
}

int main() {
	display(20, '#');
	if (isEven(11)) printf("\n¦���Դϴ�.");
	else printf("\nȦ���Դϴ�.");
	return 0;
}