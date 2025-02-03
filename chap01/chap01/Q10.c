#include <stdio.h>

int main14(void)
{
	int a, b;
	int sum;

	printf("a의 값 : "); scanf_s("%d", &a);
	printf("b의 값 : "); scanf_s("%d", &b);

	while (a >= b)
	{
		printf("a보다 큰 값을 입력하세요!\n");
		printf("b의 값 : "); scanf_s("%d", &b);
	} 

	sum = b - a; 
	printf("b - a는 %d입니다.", sum);	

	return 0;
}