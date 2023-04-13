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
	int i, j, index, n;
	char *s;

	i = 0;
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
for (index = 0; dest[index]; index++)
		len++;

	s =  malloc(((len + 1)) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (dest[i] != '\0')
	{
		s[i] = dest[i];
		i++;
	}
while (src[j] != '\0' && j < n)
{
	s[i] = src[j];
i++;
j++;
}
i++;
s[i] = '\0';
return (s);
}
