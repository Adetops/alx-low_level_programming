#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table to print.
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i]->next
			printf("{'%s': '%s', 
		}
	}
}
