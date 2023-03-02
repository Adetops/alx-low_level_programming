#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int low;

	for (low = 122; low >= 97; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
