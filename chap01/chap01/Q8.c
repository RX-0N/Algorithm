#include <stdio.h>

int main11(void)
{
	int n = 0;
	int sum = 0;

	printf("1 ���� N���� ���� ���Ѵ�.(���콺�� ����)\n");
	printf("N �� : ");
	scanf_s("%d", &n);

	sum = (1 + n) * ((n - 1 + 1)*0.5);	

	printf("��� : %d", sum);	

	return 0;
}