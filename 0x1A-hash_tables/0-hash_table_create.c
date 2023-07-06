#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	hash_node_t **head = NULL;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (size <= 0)
		return (NULL);

	while (1)
	{
		new_hash->size = size;
		for (i = 1; i <= size; i++)
		{
			new_hash->array = head;
		}

		return (new_hash);
	}

	return (NULL);
}
