#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes to add to s1 from s2
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * Return: pointer to newly allocated memory space, NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int c, c1;
	unsigned int p1, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c = 0; s1[c] != '\0'; c++)
		;
	for (c1 = 0; s2[c1] != '\0'; c1++)
		;
	if (n > c1)
		n = c1;
	p1 = c + n;
	ptr = malloc(p1 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < p1; i++)
	{
		if (i < c)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - c];
	}
	ptr[i] = '\0';
	return (ptr);
}
