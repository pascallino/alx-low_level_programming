#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that lookup an value
 * and returns its index
 * @arr: pointer to the array elements
 * @size: size of array
 * @cmp: function pounter  to check index in array
 * if true return index  else -1 or 1
 * Return: Always index of type int (Success)
 */


int int_index(int *arr, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (arr == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(arr[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);  /*indicates that no element was found*/
}
