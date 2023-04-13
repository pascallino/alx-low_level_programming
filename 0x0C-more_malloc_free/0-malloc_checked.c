#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - memmory allocation
 * @size: size of the data
 * Description: allocate size
 * Return: char
 */
void *malloc_checked(unsigned int size)
{
	void *p;

	p = malloc(size);

	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
