#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > 1)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}
