#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}