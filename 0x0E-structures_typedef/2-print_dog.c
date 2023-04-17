#include "dog.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	float a;

	if (d != NULL)
	{
	if (d->name == NULL)
		d->name =  "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
	}
	}

