#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * *_strcpy - copies the string pointed to by src including the terminating
 * null byte (\0) to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner to initialize for the new dog
 * Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *nd;

	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
		return (NULL);

	nd->name = malloc(_strlen(name) + 1);
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->age = age;
	nd->owner = malloc(_strlen(owner) + 1);
	if (nd->owner == NULL)
	{
		free(nd);
		free(nd->name);
		return (NULL);
	}
	_strcpy(nd->name, name);
	_strcpy(nd->owner, owner);
	return (0);
}
