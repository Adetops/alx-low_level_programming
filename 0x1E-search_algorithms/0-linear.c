#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search -  searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: 0 if success, -1 if failed or error
 */
int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
