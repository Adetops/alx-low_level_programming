#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order, with two digits
 * You can only use putchar function and five times maximum
 * Return: 0
 */
int main(void)
{
	int n1 = 48;
	int n2;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 52)
			{
				putchar(com);
				putchar(32);
			}
			n2 <= 1;
		}
		n1 <= 1;
	}
	purchar(9);
	purchar('\n');
	return (0);
}
