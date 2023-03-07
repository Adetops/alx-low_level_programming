#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms,
 * followed by a new line; considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000.
 *
 * Return: always 0.
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int k, sum = 0;

	while (j <= 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		k = i + j;
		i = j;
		j = k;
	}
	printf("%d\n", sum);
	return (0);
}
