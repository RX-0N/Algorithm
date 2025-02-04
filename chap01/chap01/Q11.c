#include <stdio.h>

int main(void)
{
	// 	양의 정수를 입력하고 자릿수를 출력하는 프로그램
	// 	135 입력 시 '그 수는 3자리입니다.' 출력
	// 	1314 입력 '그 수는 4자리입니다. 출력

	char number[100];

	int inputNum = 0;
	int digits = 0;

	do {
		printf("input positive integer : "); scanf_s("%d", &inputNum);
	} while (0 >= inputNum);

	//digits = strlen();

	if (digits >= 0)
	{

	}
	else
	{
		digits = digits / 10;

		if (1 <= digits)
		{

		}
	}

	return 0;
}
