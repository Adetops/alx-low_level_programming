#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int k, fibo;

	fibo = 0;
	while (fibo <= 97)
	{
		if (fibo != 97)
			printf("%lu, ", j);
		else
			printf("%lu\n", j);
		k = i + j;
		i = j;
		j = k;
		fibo++;
	}
	return (0);
}
