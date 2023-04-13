#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - creat a new block after  malloic allocates  and free the space.
 * @ptr: A pointer to the previously allocated mem
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * Return: pointer if all conditions are met
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
	{
		return (NULL);
	}

	memcpy(newptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (newptr);
}
