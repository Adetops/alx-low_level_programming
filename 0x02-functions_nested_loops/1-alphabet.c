#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char lw = 'a';

	while ("char = 'a'; char <= 'z'; char++")
	{
		print_alphabet(lw);
		lw += 1;
	}
	print_alphabet('\n');
	return (0);
}
