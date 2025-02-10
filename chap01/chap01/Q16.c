#include <stdio.h	>

void triangleLB(int n)
{
	// ���� �Ʒ��� ������ �̵ �ﰢ�� ���
	int h, w;

	printf("���� �Ʒ��� ������ �̵ �ﰢ�� ��� : \n");

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

	printf("���� ���� ������ �̵ �ﰢ�� ��� : \n");

	for (h = 1; h <= n; h++)
	{
		for (w = n; w >= h; w--)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRU(int n)
{
	printf("������ ���� ������ �̵ �ﰢ�� ��� : \n");

	int h, w, x;

	for (h = 1; h <= n; h++)
	{		
		for (x = n - h; x < h; x++)
		{
			putchar(' ');			
		}

		for (w = n; w >= h; w--)
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

	//triangleLB(n);
	//triangleLU(n);
	triangleRU(n);

	return 0;
}