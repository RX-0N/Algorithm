#include <stdio.h>
#include <string.h>

int main15(void)
{
	// 	���� ������ �Է��ϰ� �ڸ����� ����ϴ� ���α׷�
	// 	135 �Է� �� '�� ���� 3�ڸ��Դϴ�.' ���
	// 	1314 �Է� '�� ���� 4�ڸ��Դϴ�. ���

	char number[100] = "";

	int inputNum = 0;
	int digits = 0;

	do {
		printf("���� ���� �Է� : "); gets(number);
		inputNum = atoi(number);	

	} while (0 >= inputNum);

	digits = strlen(number);

	printf("�� ���� %d�ڸ� �Դϴ�.", digits);

	return 0;
}