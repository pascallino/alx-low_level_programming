#include <stddef.h>

/**
 * array_iterator - function that vls a given function
 * parameter on each item of an array
 * @arr: array to iterate its items
 * @size: size in bytes  of the array
 * @action:function pointer to call
 * the function
 * Return: nothing if @array and @action is NULL
*/

void array_iterator(int *arr, size_t size, void (*action)(int))
{
	unsigned int i;

	if (arr == NULL && action == NULL)
		return;

	if (arr == NULL || action == NULL || !(size > 0))
		return;

	for (i = 0; i < size; i++)
		action(arr[i]);

}
