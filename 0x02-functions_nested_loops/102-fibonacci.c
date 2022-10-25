#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2.
 *
 * Return: always 0.
 */
int main(void)
{
	int i, res, n;

	i = 1;
	while (i <= 50)
	{
		res = (n - 1) + (n - 2);
		_putchar(res);
		i++;
	}
	return (res);
}
