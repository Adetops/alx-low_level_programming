#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to the hash table.
 * @ht: hash table to add or update the key/value to
 * @key: key. This cannot be an empty string
 * @value: value associated with the key.
 * value must be duplicated and can be an empty string.
 * Return: 1 if success and 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *dup_value = strdup(value);
	hash_node_t *new;

	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	
	new->key = strdup(key);
	new->value = dup_value;
	new->next = NULL;

	if (ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (i == index)
			{
				if (ht->array[i] == NULL)
					ht->array[i] = new;
				else
				{
					new->next = ht->array[i];
					ht->array[i] = new;
				}
    				printf("key: %s\tvalue: %s at index %lu\n",
						new->key, new->value, index);
			}
		}

		return (1);
	}

	return (0);
}
