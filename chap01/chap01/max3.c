#include <stdio.h>

int main1(void)
{
	int a, b, c;
	int max; 
	printf("세 정수의 최댓값을 구합니다..\n");
	printf("a의 값 : "); scanf_s("%d", &a);
	printf("b의 값 : "); scanf_s("%d", &b);
	printf("c의 값 : "); scanf_s("%d", &c);

	max = a;

	if (b > max) max = b;
	if (c > max) max = c;

	printf("최댓값은 %d입니다.\n", max);

	// 여러 프로세스(문장)이 순차적으로 실행되는 구조 => 순차적(concatenation) 구조
	// if문 => 선택(selection) 구조

	return 0;
}