#include <stdio.h>

int main(void)
{
	// 	���� ������ �Է��ϰ� �ڸ����� ����ϴ� ���α׷�
	// 	135 �Է� �� '�� ���� 3�ڸ��Դϴ�.' ���
	// 	1314 �Է� '�� ���� 4�ڸ��Դϴ�. ���

	char number[100];

	int inputNum = 0;
	int digits = 0;

	do {
		printf("input positive integer : "); scanf_s("%d", &inputNum);
	} while (0 >= inputNum);

	//digits = strlen();

	if (digits >= 0)
	{

	}
	else
	{
		digits = digits / 10;

		if (1 <= digits)
		{

		}
	}

	return 0;
}
