#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: The number of slots
 * @size: The byte size of each array slot
 * Return: If nmemb = 0 or if size = 0 return NULL,, or the function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
	return (NULL);
}
return (p);
}
