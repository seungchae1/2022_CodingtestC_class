#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi = NULL;

	//메머리 할당 함수 malloc()으로 동적 메모리 할당
	pi = (int*)malloc(sizeof(int));

	//동적 메모리 할당 성공 검사
	if (pi == NULL) {
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}
	*pi = 3;
	printf("주소값 : *pi = %d, 저장값  :p = %d\n", pi, *pi);

	//메모리 해제
	free(pi);

	return 0;
}