#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct pointer
 *
 * @d: pointer to deallocate
 *
 * Return: void
 */

void free_dog(dog_t *d)
{

	if (d != NULL || d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}


}
