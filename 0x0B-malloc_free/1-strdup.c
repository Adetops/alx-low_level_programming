#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: source string
 * On success, the _strdup function returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strdown;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strdown = (char *)malloc(sizeof(char) * (i + 1));
	if (strdown == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strdown[j] = str[i];
	return (strdown);
}
