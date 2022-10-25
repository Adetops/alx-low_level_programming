#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2.
 *
 * Return: always 0.
 */
int main(void)
{
	long int i, n, a, b;

	a = 1, b = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (i != 50)
			printf("%ld, ", a);
		else
			printf("%ld\n", a);
		n = a + b;
		a = b;
		b = n;
	}
	return (0);
}
