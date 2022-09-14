#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{

	int i;
	char lw = 'a';

	for (char = 'a'; char <= 'z'; char++)
	{
		_putchar(lw);
		lw += 1;
	}
	_putchar('\n');
	return (0);
}
