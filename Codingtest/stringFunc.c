#include <stdio.h>
#include <string.h>

int main() {
	char s1[100] = { "coding test" };
	char s2[100];

	printf("s1�� ���ڿ��� ���� : %d\n", strlen(s1));

	strcpy(s2, s1);
	printf("%s\n", s2);

	strcat(s2, s1);
	printf("%s\n", s2); //���ʲ��� �����ʲ� ����

	printf("%d\n", strcmp("high","school"));
	printf("%d\n", strcmp("school", "high"));
	printf("%d\n", strcmp("high", "high"));

	return 0;
}