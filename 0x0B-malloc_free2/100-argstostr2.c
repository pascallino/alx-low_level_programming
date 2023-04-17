#include <stdlib.h>
#include <string.h>

char *_strcat(char *dest, char *src);

/**
 * argstostr - a function that joins the arguments
 * @ac: argument c
 * @av: argument array
 * Return: a char * pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)   {
int i;
int length = 0;
char *result;

if (ac < 2 || av == NULL)
{
	return (NULL);
}

	for (i = 1; i < ac; i++)             {
		length += (strlen(av[i]) + 1);
	}
result = (char*) malloc(length);
/* allocate memory for the concatenated string */
if (result == NULL)
	return (NULL);

strcpy(result, "");
for (i = 1; i < ac; i++)
{
result =_strcat(result, av[i]);
result = strcat(result, "\n");
	/* concatenate each argument to the result string */
}
result = _strcat(result, "\0");
return (result);
}

/**                                   * _strcat - a function that joins the arguments
 * @dest: argument c
 * @src: argument array
 * Return: a char * pointer to a new string or NULL if it fails
 */

char *_strcat(char *dest, char *src) {
	int i, j;
	char *s;

	i = 0;
	j = 0;
	s= (char*)malloc((strlen(dest) + strlen(src)) * sizeof(char)  + 1);
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

return (s);
}
