#include "main.h"

/**
 * main - a program that prints _putchar, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char h = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(h);
	}
	return (0);
}
