#include "search_algos.h"

int bin_search(int *array, int low, int high, int value);
/**
 * exponential_search - Exponential search is an algorithm used to
 * search for a specific target value in a sorted array of elements.
 * It works by first finding a range where the target value may exist
 * using an exponential increment, and then performing a binary search
 * within that range.
 * @array: array
 * @size:size of the array
 * @value: target value to search
 * Return: -1 or value
 */
int exponential_search(int *array, size_t size, int value)
{

	int pos = 1;
	int bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	/*Find the exponential bound*/
	if (array[0] != value)
	{
		while (pos < (int)size && array[pos - 1] < value)
		{
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			bound = pos;
			pos *= 2;
		}
	}
	else
	{
		bound = 0;
		pos = 0;
	}

	printf("Value found between indexes [%d] and [%d]\n",
			bound, pos < (int)size ? pos : (int)size - 1);

	/*Perform binary search within the range [bound, min(pos, size - 1)]*/
	return (bin_search(array, bound,
				pos < (int)size ? pos : (int)size - 1, value));
}
/**
 * bin_search - binary search
 * @array: array
 * @low: low index
 * @high: high range index
 * @value: search value
 * Return:-1 or value
 */
int bin_search(int *array, int low, int high, int value)
{
	int mid;
	int i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
