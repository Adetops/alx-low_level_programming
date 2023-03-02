#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar function and not more than twice
 * Return: 0
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	putchar('\n');
	return (0);
}
