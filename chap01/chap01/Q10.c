#include <stdio.h>

int main14(void)
{
	int a, b;
	int sum;

	printf("a�� �� : "); scanf_s("%d", &a);
	printf("b�� �� : "); scanf_s("%d", &b);

	while (a >= b)
	{
		printf("a���� ū ���� �Է��ϼ���!\n");
		printf("b�� �� : "); scanf_s("%d", &b);
	} 

	sum = b - a; 
	printf("b - a�� %d�Դϴ�.", sum);	

	return 0;
}