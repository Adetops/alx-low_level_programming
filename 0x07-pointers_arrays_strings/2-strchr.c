#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	else if (*s == 0)
		return (0);
	s++;
}
