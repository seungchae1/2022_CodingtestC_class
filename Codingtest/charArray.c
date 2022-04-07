#include <stdio.h>

int main() {
	char color[5][10] = { "red","green","blue","brown","cyan" };
	int i, j;

	for (i = 0; i <5; i++) {
		printf("%s\n", color[i]); //문자열로 출력
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			printf("%c	", color[i][j]); //문자단위로 출력
		}
		printf("\n");
	}

	/*문자열 길이*/
	char s1[20] = { "coding test" };
	int cnt = 0;

	while (s1[cnt] != '\0') { //문자열 끝인 널문자가 나오기 전까지 반복
		cnt++;
	}
	printf("문자열의 길이 : %d\n", cnt);

	cnt = 0;
	for (i = 0; i < 20; i++) {
		if (s1[i] == 0) break;
		cnt++;
	}
	printf("문자열의 길이 : %d\n", cnt);

	return 0;
}