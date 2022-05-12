#include <stdio.h>

//#을 20개 화면에 출력하는 함수
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c",ch);
	}
}

//짝수인지 홀수인지 판별, 키보드 입력x

int main() {
	display(20, '#');

	return 0;
}