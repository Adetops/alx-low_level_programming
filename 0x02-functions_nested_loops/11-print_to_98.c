#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * Numbers must be separated by a comma, followed by a space
 * @n: the first printed number
 * The last printed number should be 98
 * Return: nothing.
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
/**
 * comment - This is a comment, betty.
 * int i, j;
 * if (n < 99)
 * {
 * for (i = n; i <= 98; i++)
 * {
 * if (i != 98)
 * printf("%d, ", i);
 * else if (i == 98)
 * printf("%d\n", i);
 * }
 * }
 * else if (n > 97)
 * {
 * for (j = n; j >= 98; j--)
 * {
 * if (j != 98)
 * printf("%d, ", j);
 * else if (j == 98)
 * printf("%d\n", j);
 * }
 * }
 */
