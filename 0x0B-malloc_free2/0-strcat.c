#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{

	int i, j;
	int len;
	char *s;

	i = 0;
	j = 0;
	len = strlen(src);
s = (char*)malloc((strlen(dest) + strlen(src)) * sizeof(char)  + 1);

while (s[i] != '\0')
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
