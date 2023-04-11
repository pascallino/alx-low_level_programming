#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that joins the arguments
 * @ac: argument c
 * @av: argument array
 * Return: a char * pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	int length = 0;
	char *result;

	if (ac < 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		/* exclude the first argument, which is the program name*/
		length += (strlen(av[i]) + 1);
	}

	result = (char *) malloc(length + 1);
	/* allocate memory for the concatenated string */
	if (result == NULL)
		return (NULL);

	strcpy(result, "");
	for (i = 0; i < ac; i++)
	{
		strcat(result, av[i]);
		strcat(result, "\n");
		/* concatenate each argument to the result string */
	}
	strcat(result, "\0");

	return (result);
}
