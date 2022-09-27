#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x >= 0; x++)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;
	}
	return (dest)
}
