#include <stdio.h>

int main13(void)
{
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�.");
	do {
		printf("n �� : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}