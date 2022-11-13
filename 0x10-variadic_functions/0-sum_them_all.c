#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: the result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, res;

	va_start(ap, n);
	if (n == 0)
		return (0);
	res = 0;
	for (i = 0; i < n; i++)
		res += va_arg(ap, int);
	va_end(ap);
	return (res);
}
