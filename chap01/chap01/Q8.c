#include <stdio.h>

int main11(void)
{
	int n = 0;
	int sum = 0;

	printf("1 부터 N까지 합을 구한다.(가우스의 덧셈)\n");
	printf("N 값 : ");
	scanf_s("%d", &n);

	sum = (1 + n) * ((n - 1 + 1)*0.5);	

	printf("결과 : %d", sum);	

	return 0;
}