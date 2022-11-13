#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments passed
 * @argv: array of argumets
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, arg2;
	char *arr;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}
	arg2 = atoi(argv[1]);
	if (arg2 < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	arr = (char *)main;
	for (i = 0; i < arg2; i++)
	{
		printf("%02hhx, ", arr[i]);
		if (i == arg2 - 1)
			printf("%02hhx\n", arr[i]);
	}
	return (0);
}

