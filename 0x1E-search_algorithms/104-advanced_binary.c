#include "search_algos.h"

int b_search(int *array, size_t low, size_t high, int value);
/**
 * advanced_binary - uses recursion to perform the advanced
 * binary search. It ensures that the function returns the index
 * of the first occurrence of the target value. If the value is not
 * present in the array or the array is NULL, it returns -1.
 * @array: array
 * @size: size of an array
 * @value: the target value
 * Return: value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (b_search(array, 0, size - 1, value));
}

/**
 * b_search - binary search
 * @array: array
 * @low: low index
 * @high: high range index
 * @value: search value
 * Return:-1 or value
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	/*Calculate the middle index*/
	size_t i;
	size_t mid = low + (high - low) / 2;

	if (low > high)
		return (-1);

	/*Print the current subarray*/
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	/*If the mid element matches the value, check for the first occurrence*/
	if (array[mid] == value)
	{
		/*Check if this is the first occurrence by verifying the previous element*/
		if (mid == low || array[mid - 1] != value)
			return ((int)mid);
		/*Continue searching in the left subarray*/
		else
			return (b_search(array, low, mid, value));
	}
	/*If the mid element is greater*/
	/* than the value, search in the left subarray*/
	else if (array[mid] > value)
	{
		return (b_search(array, low, mid - 1, value));
	}
	/*If the mid element is less than the value, search in the right subarray*/
	else
	{
		return (b_search(array, mid + 1, high, value));
	}
}
