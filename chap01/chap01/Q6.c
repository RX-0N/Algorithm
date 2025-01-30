#include <stdio.h>

int main8(void)
{
	int i, n;
	int sum;

	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값 : ");
	scanf_s("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum += i;
		i++;	
	}

	printf("프로그램 종료, n의 값 : %d\n", i);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}