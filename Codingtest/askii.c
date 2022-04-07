#include <stdio.h>

int main()
{
	char ch = '9';
	int number = ch - 48; // '9' - 48(0)
	int n = 9;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);
	//ch = 9, number = 9, n = 9

	ch += 1;
	number += 1;
	n += 1;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);
	//ch = : , number = 10, n = 10
	// 59 = ':'

	ch += '1';
	number += '1';
	n += '1';

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);
	// '1' = 49
	//ch = 58+49 , number = 59, n = 59
	return 0;
}