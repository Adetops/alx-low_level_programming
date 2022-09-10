#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
