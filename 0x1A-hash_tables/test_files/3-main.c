#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "subgenera", "so great!");
    hash_table_set(ht, "stylist", "nice");
    hash_table_set(ht, "Holberton", "is cool");
    hash_table_set(ht, "Holberton", "is sooooo coooool");
    hash_table_set(ht, "Holberton", "is awesome");
    hash_table_set(ht, "urites", "unique");
    hash_table_set(ht, "redescribed", "wonderful");
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");
    return (EXIT_SUCCESS);
}
