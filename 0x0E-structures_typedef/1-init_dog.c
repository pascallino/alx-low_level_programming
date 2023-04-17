#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog init
 * Return : void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
