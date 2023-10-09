#include "search_algos.h"
/**
 * binary_search - binary search, find the mid comapre
 * and move left or right depending on the result of the
 * comparism
 * @arr: array
 * @n: the size of the array
 * @target: search value
 * Return: search vlue or -1
 */
int binary_search(int *arr, size_t n, int target)
{
	int left = 0;
	int i;
	int right = n - 1;
	int mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", arr[i]);
		printf("%d\n", arr[i]);

		mid = left + (right - left) / 2; /*Avoid overflow*/

		if (arr[mid] == target)
		{
			return (mid); /*Target found at index mid*/
		}
		else if (arr[mid] < target)
		{
			left = mid + 1; /*Target in the right half*/
		}
		else
		{
			right = mid - 1; /*Target in the left half*/
		}
	}

	return (-1); /* Target not found*/
}
