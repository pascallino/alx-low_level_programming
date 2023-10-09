#include "search_algos.h"
/**
 * interpolation_search - same as binary search but uses a special
 * formular
 * This formula calculates a position that is proportional
 * to the value being searched within the current search range
 * @array: array
 * @size: the size of the array
 * @value: search value
 * Return: search vlue or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}


	return (-1);
}

