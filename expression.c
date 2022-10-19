#include <stdio.h>

int main(void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;
	printf("a - b = %i\n", result);

	result = a * b;
	printf("a * b = %i\n", result);

	result = a / c;
	printf("a / c = %i\n", result);

	result = c + d;
	printf("c + d = %i\n", result);

	result = a + b * c; //precedence
	printf("a + b * c = %i\n", result);

	return (0);
}

