#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog_t address
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
