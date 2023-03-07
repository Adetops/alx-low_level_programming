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

	for (fibo = 0; fibo <= 97; fibo++)
	{
		if (fibo < 97)
			printf("%lu, ", i);
		else
			printf("%lu\n", i);
		k = i + j;
		i = j;
		j = k;
	}
	return (0);
}
