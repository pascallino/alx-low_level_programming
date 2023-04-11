#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - redirects the pointer to a new pointer witth a new address
 * Description: concatination
 * @dest: the source string to append
 * @src: the source string to append
 * Return: pointer  char *
 */

char *str_concat(char *dest, char *src)
{
	int i, j;
	char *s;

	i = 0;
	j = 0;
	s =  malloc((strlen(dest) + strlen(src)) + 1 * sizeof(char));
	while (dest[i] != '\0')
	{
		s[i] = dest[i];
		i++;
	}
while (src[j] != '\0')
{
	s[i] = src[j];
	i++;
	j++;
}
i++;
s[i] = '\0';
return (s);
}
