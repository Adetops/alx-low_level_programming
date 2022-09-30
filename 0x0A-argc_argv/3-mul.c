#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: size of arguments passed
 * @argv: argument vectors
 * If the program does not receive two arguments, your program should
 * print Error, followed by a new line, and return 1
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int x, i, j;

	i = argv[1];
	j = argv[2];
	x = i * j;
	
	printf("%d", x);
	
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	
	return (0);
}
