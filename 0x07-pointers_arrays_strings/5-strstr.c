#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: source string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; *(haystack + x) != '\0'; x++)
	{
		for (y = 0; *(needle + y) != '\0'; y++)
		{
			if (*haystack == *needle)
				return (*(haystack + x));
			if (!*needle)
				*haystack += 1;
		}
		return ('\0');
	}
}
