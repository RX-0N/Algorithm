#include <stdio.h>
#include <string.h>

int main15(void)
{
	// 	양의 정수를 입력하고 자릿수를 출력하는 프로그램
	// 	135 입력 시 '그 수는 3자리입니다.' 출력
	// 	1314 입력 '그 수는 4자리입니다. 출력

	char number[100] = "";

	int inputNum = 0;
	int digits = 0;

	do {
		printf("양의 정수 입력 : "); gets(number);
		inputNum = atoi(number);	

	} while (0 >= inputNum);

	digits = strlen(number);

	printf("그 수는 %d자리 입니다.", digits);

	return 0;
}