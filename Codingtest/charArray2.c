#include <stdio.h>

int main() {
	char s1[20] = { "coding test" };
	char s2[20];
	int i;

	for (i = 0; i < 20; i++) {
		s2[i] = s1[i];
		if (s1[i] == '\0')break;
	}
	
	printf("บนป็บป : %s\n", s2);

	return 0;
}