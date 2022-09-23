#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest string
 */
char *leet(char *s)
{
	int count = 0, i;
	int lw_letters[] = {97, 101, 111, 116, 108};
	int up_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lw_letters[i] || *(s + count) == up_letters)
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
