#include <stdio.h>

//#을 20개 화면에 출력하는 함수
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c",ch);
	}
}

//짝수인지 홀수인지 판별, 키보드 입력x
int isEven(int n) {
	return (n % 2 == 0 ? 1 : 0);
}

int main() {
	display(20, '#');
	if (isEven(11)) printf("\n짝수입니다.");
	else printf("\n홀수입니다.");
	return 0;
}