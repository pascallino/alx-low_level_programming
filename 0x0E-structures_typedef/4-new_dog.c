#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *d, char *s);
/**
 * _strlen - length of string
 *
 * @str: string to get the length
 *
 * Return: length of the string
*/

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - return a copied string 
 *
 * @s: string to copy to 
 * @d: destination 
 *
 * Return: @d
*/

char *_strcpy(char *d, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		d[i] = s[i];
	d[i] = '\0';

	return (d);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: who owns the dog
 * Return: struct pointer dog NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}

newdog->name = malloc((_strlen(name) + 1) * sizeof(char));
if (newdog->name == NULL)
{
	free(newdog);
		return (NULL);
}
	
newdog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
if (newdog->owner == NULL)
{
free(newdog->name);
	free(newdog);
		return (NULL);
}
newdog->name = _strcpy(newdog->name, name);
newdog->age = age;
newdog->owner = _strcpy(newdog->owner, owner);
return (newdog);
}
