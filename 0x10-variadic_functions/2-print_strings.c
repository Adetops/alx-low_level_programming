#include "variadic_functions.h"

/**
 * print_strings - function that print strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
