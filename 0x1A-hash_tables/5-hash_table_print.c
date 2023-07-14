#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table to print.
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key,
					ht->array[i]->value);
			temp = ht->array[i]->next;
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
			if (temp->next != NULL)
					printf(", ");
		}
	}
	printf("{}\n");
}
