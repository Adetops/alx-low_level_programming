#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 * followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

/*	i = 'a'; */

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
