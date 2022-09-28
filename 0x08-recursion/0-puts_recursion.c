#include "main.h"

/**
 * _puts_recursion -  function that prints a string, followed by a new line
 * @s: string input
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(*s + i);
	}
	else
		_putchar('\n');
}
