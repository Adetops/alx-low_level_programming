#include <stdio.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int res, arg1, arg3;
	int (*func)(int, int);
	char arg2;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	arg2 = *argv[2];
	if ((arg2 == '/' || arg2 == '%') && arg3 == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	res = func(arg1, arg3);
	printf("%d\n", res);
	return (0);
}
