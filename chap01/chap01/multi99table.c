#include <stdio.h>

int main17(void)
{
	int i, j;
	printf("----- ����ǥ -----\n");
	for (i = 1; i <= 9; i++) 
	{
		for (j = 1; j <= 9; j++)
		{
			printf("% 3d", i * j);
		}		
		putchar('\n');
	}

	// \n : ���� ����(newline)��, �ؽ�Ʈ�� �� ���� ������ ���ο� ���� ���۵�.
	//		�� �ٲ� ����(line break), EOL(End-Of-Line)�̶󵵰� ��.

	return 0;
}