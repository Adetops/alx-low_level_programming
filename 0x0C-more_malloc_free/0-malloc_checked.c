#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
