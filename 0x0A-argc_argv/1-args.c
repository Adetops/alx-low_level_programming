#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: arguments size
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
