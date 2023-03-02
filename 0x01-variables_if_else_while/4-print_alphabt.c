#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * You can only use the putchar function and exactly twice
 * Return: 0
 */
int main(void)
{
	int lw = 'a';

	while (lw <= 'z')
	{
		if (lw == 'q' || lw == 'e')
		{
			lw += 1;
		}
/*		else */
		putchar(lw);
		lw += 1;
	}
	putchar('\n');
	return (0);
}
