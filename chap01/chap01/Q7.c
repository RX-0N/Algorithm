#pragma warning(disable:4996)
#include <stdio.h>


int main(void)
{
	int i, n;
	int sum;
	sum = 0;
	char buffer[100];
	int bufferSize = 0;

	puts("1부터 n까지의 합을 구합니다.");
	printf("n 값 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;

		if (i == n)
		{
			sprintf(buffer + bufferSize, "%d = %d", i, sum);
		}
		else
		{
			bufferSize += sprintf(buffer + bufferSize, "%d + ", i);
		}
	}
	
	printf("%s\n", buffer);

	return 0;
}