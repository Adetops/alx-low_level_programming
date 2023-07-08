#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key you're looking for
 * Return: the value associated with the key or NULL if key cannot be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	for (i = 0; i < ht->size; i++)
	{
		if (i == index)
		{
			if (ht->array[i] == NULL)
				return (NULL);
			else if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
			else if (ht->array[i]->next != NULL)
			{
				temp = ht->array[i]->next;
				while (temp != NULL)
				{
					if (strcmp(temp->key, key) == 0)
						return (temp->value);
					temp = temp->next;
				}
			}
		}
	}
	free(ht->array);
	return (NULL);
}
