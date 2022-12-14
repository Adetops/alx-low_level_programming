#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count1 >= 0)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
