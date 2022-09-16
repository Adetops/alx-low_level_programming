#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * followed by a new line
 * You can only use _putchar twice in your code
 * Return: 0 if success
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
