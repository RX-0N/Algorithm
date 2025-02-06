#include <stdio.h>
#include <stdlib.h>

int max4(int a, int b, int c, int d)
{
	int max;

	max = a; 

	if (b > max)
	{
		max = b;
	}

	if (c > max)
	{
		max = c;
	}
	
	if (d > max)
	{
		max = d;
	}

	return max;	
}

int min3(int a, int b, int c)
{
	int min;

	min = a;

	if (b < min)
	{
		min = b;
	}
	
	if (c < min)
	{
		min = c;
	}	

	return min;
}

int min4(int a, int b, int c, int d)
{
	int min;

	min = a;

	if (b < min)
	{
		min = b;
	}

	if (c < min)
	{
		min = c;
	}

	if (d < min)
	{
		min = d;
	}
	
	return min;
}
int main0(void)
{
	srand(time(NULL));

	int a, b, c, d;

	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	c = rand() % 100 + 1;
	d = rand() % 100 + 1;

	printf("max4(%d, %d, %d, %d) = %d\n", a, b, c, d, max4(a, b, c, d));
	printf("min3(%d, %d, %d) = %d\n", a, b, c, min3(a, b, c));
	printf("min4(%d, %d, %d, %d) = %d\n", a, b, c, d, min4(a, b, c, d));
}