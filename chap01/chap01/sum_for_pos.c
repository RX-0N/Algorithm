#include <stdio.h>

int main13(void)
{
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다.");
	do {
		printf("n 값 : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}