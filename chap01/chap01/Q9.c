#include <stdio.h>	

int sumof(int a, int b) 
{
	int sum = 0;
	int big = 0;

	if (a > b)
	{
		big = a;

		for (int i = b; i <= big; i++)
		{
			sum += i;
		}
	}
	else
	{
		big = b;

		for (int i = a; i <= big; i++)
		{
			sum += i;
		}
	}	

	return sum;
}

int main12(void)
{
	printf("%d 부터 %d 까지의 합은? -> %d\n", 3, 5, sumof(3, 5));
	printf("%d 부터 %d 까지의 합은? -> %d\n", 6, 4, sumof(6, 4));

	return 0;
}