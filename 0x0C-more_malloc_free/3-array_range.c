#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers sorted
 * @min: The first value of the array
 * @max: The last value of the array.
 * Return: If min is greater than max the func fails - NULL, else - a pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	array = NULL;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min + 1;
	if (size > 0)
	{
		array = (int *)malloc(sizeof(int) * size);
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = min + i;
		}
	}
	return (array);
}
