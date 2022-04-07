#include <stdio.h>

int main() {
	int number = 100;
	printf("number의 주소 %p 값 : %d", &number, number);

	int n = 5; //n이라는 이름의 변수를 선언, 값을 5로 저장
	printf("n의 값 : %d\n", n); //5
	int* ptr = &n; //ptr n의 주소를 가리키는 포인터로 선언
	printf("n의 값 : %d\n", *ptr); //5
	*ptr = 10; //ptr이 가리키는 n에 10을 저장
	// 즉, n의 값 5를 10으로 교체
	printf("n의 값 : %d\n", n); //10

	return 0;
}