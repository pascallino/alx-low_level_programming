#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - A function that duplicates a string and returns a pointer
 * @src: input string to duplicate
 * Return: NULL if str == NULL
 */

char *_strdup(char *src)
{
	char *dst;

	if (str == NULL)
		return (NULL);
	dst = malloc(strlen(src) + 1);
  /*  Space for length plus null*/
if (dst == NULL)
	return (NULL);

/*  No memory return null*/
strcpy(dst, src);
/* Copy the characters */
return (dst);
/* Return the new string*/
}
