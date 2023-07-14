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
	unsigned long int index;
	hash_node_t *new, *temp;

	if (ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new->key);
				free(new->value);
				free(new);
				return 1;
			}
			temp = temp->next;
		}
		temp->next = new;
	}
	return (1);
}
