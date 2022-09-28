#include "main.h"

/**
 * _puts_recursion -  function that prints a string, followed by a new line
 * @s: string input
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	_puts_recursion(s += (s + 1));
}