#include <stdio.h>

int main17(void)
{
	int i, j;
	printf("----- 곱셈표 -----\n");
	for (i = 1; i <= 9; i++) 
	{
		for (j = 1; j <= 9; j++)
		{
			printf("% 3d", i * j);
		}		
		putchar('\n');
	}

	// \n : 개행 문자(newline)로, 텍스트의 한 행이 끝나고 새로운 행이 시작됨.
	//		줄 바꿈 문자(line break), EOL(End-Of-Line)이라도고 함.

	return 0;
}