#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * You can only use putchar three times in your code
 * Return: 0
 */
int main(void)
{
	int lw = 'a';
	int up = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
		lw += 1;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up += 1;
	}
	putchar('\n');
	return (0);
}
