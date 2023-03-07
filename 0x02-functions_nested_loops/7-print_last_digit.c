#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int to extract the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
