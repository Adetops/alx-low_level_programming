#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * You can only use one if in your code
 * You can only use two loops in your code
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: the pointer to dest string
 */
char *leet(char *s)
{
	int count = 0, i;
	int lw_letters[] = {97, 101, 111, 116, 108};
	int up_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	*(s + count) != '\0';
	for (i = 0; i < 5; i++)
	{
		if (*(s + count) == lw_letters[i] || *(s + count) == up_letters)
		{
			*(s + count) = numbers[i];
			break;
		}
	}
	count++;
	return (s);
}
