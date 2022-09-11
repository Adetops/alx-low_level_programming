#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 * two two-digit numbers
 * The numbers should range from 0 to 99
 * All numbers should be printed with two digits.
 * The combinations of numbers should be printed in ascending order
 * You can only use the putchar function and eight times maximum
 * Return: 0 if success
 */
int main(void)
{
	int n1 = 48;
	int a = 0;
	int b;
	int com = 44;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + n1);
			putchar((a % 10) + n1);
			putchar(32);
			putchar((b / 10) + n1);
			putchar((b % 10) + n1);
			if (a != 98 || b != 99)
			{
				putchar(com);
				putchar(32);
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
