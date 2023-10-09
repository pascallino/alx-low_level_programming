#include "search_algos.h"
/**
 * linear_search - linear search an array sttarting from index  0
 * to the last index
 * @array: array
 * @size: array size
 * @value: value to search
 * Return: value or -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}

