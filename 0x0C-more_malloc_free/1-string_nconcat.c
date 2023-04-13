#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - redirects the pointer to a new pointer witth a new address
 * @src: the second source string to append
 * @dest: the first  source of string
 * @lenght: number of characters to be copied
 * Description: concat two strings
 * Return: a pointer
 */

char *string_nconcat(char *dest, char *src, unsigned int lenght)
{
	int i, len, j, dex;
	char *s;

	i = 0;
dex = 0;
	len = lenght;
	j = 0;
if (dest == NULL)
	{
		dest = "";
	}
	if (src == NULL)
	{
		src = "";
	}
for (dex = 0; dest[dex]; dex++)
		len++;


	s =  malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
len = 0;
for (dex = 0; dest[dex]; dex++)
		s[len++] = dest[dex];

	for (dex = 0; src[dex] && dex < n; dex++)
		s[len++] = src[index];

	s[len] = '\0';
return (s);
}
