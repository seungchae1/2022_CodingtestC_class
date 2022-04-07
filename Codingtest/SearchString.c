#include <stdio.h>
#include <string.h>

int main()
{
	/*
	//내가 짠 코드
	//strlen()은 2차원배열에서 사용 불가능
	//일차원배열에서는 사용시 for문에 직접적으로 사용하지 않고 변수에 따로 넣어준다.
	char s1[6][10] = { "한국","미국","일본","영국","독일","호주" };
	int count = 0;
	for (int i = 0; i < strlen(s1); i++) {
		count++;
		if (strcmp(s1[i],"독일")==0) break;
	}

	printf("독일이 있는 위치는 : index %d", count);
	*/

	//선생님이랑 함께 짠 코드

	char s2[7][10] = { "한국","미국","일본","영국","독일","호주", "독일" };
	char key[10] = "독일"; //검색할 단어
	// 오름차순 (계단 올라간다 1->10)
	// 내림차순 (계단 내려간다 10->1)
	// 1. strcmp("A","B") A랑 B랑 같은 경우 =0
	// 사전 순(오름차순)으로 A가 B보다 먼저 나올경우 = 1
	// 사전 순(오름차순)으로 A가 B보다 늦게 나올 경우 = -1

	for (int i = 0; i < 7; i++) {
		if (strcmp(s2[i], key) == 0) {
			printf("%d번째 찾는 값이 있습니다.\n", i + 1);
			//break;
		}
	 }
	
	return 0;
}