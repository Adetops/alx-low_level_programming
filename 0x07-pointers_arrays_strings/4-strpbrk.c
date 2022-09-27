#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string that contain bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; *(accept + i) != 0; i++)
	{
		if (*s == *(accept + i))
			return (s);
		else
			return (0);
	}
}
