#include <stdio.h	>

void triangleLB(int n)
{
	// ���� �Ʒ��� ������ �̵ �ﰢ�� ���
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
		printf("�ﰢ�� �ܼ� �Է� : "); 
		scanf_s("%d", &n);
	} while (n <= 0);

	triangleLB(n);

	return 0;
}