#include "main.h"

/**
 * main - a program that prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char text[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
