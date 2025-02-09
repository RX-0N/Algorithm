#include <stdio.h	>

void triangleLB(int n)
{
	// 왼쪽 아래가 직각인 이등변 삼각형 출력
	int h, w;

	for (h = 1; h <= n; h++)
	{
		for (w = 1; w <= h; w++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleLU(int n)
{
	int h, w;

	for (h = 1; h <= n; h++)
	{
		for (w = 1; w <= h; w++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}


int main(void)
{
	int n;

	do {
		printf("삼각형 단수 입력 : "); 
		scanf_s("%d", &n);
	} while (n <= 0);

	triangleLB(n);

	return 0;
}