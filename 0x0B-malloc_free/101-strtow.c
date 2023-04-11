#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **alloc(int size);
/**
 * strtow - cooverts a substring to a pointer array
 * @str: pointer to string
 * Description: string array builder
 * Return: **word
 */
char **strtow(char *str)
{
	char *wordStartAdd;
	int nows;
	char *ptr;
	char **words;
	int j, word_len, i;

	nows = 0;
	i = 0;
	j = 0;
	ptr = str;
	if (str == NULL || *str == "")
			return (NULL);

	while (*ptr != '\0')
	{
		while (*ptr == ' ')
		{
			ptr++;
		}

		if (*ptr != '\0')
		{
			nows++;
		}

		while (*ptr != ' ' && *ptr != '\0')
			ptr++;

	}
	words = alloc(nows * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	ptr = str;
	while (*ptr != '\0')
	{
		while (*ptr == ' ')
		{
			ptr++;
		}

		wordStartAdd = ptr;
		while (*ptr != ' ' && *ptr != '\0')
		{
			ptr++;
		}
		if (*ptr == '\0')
		{
		}
		word_len = ptr - wordStartAdd;
		words[i] = (char *) malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			printf("jj");
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[i], wordStartAdd, word_len);
words[i][word_len] = '\0';
	i++;
	}
	return (words);
}
/**
 * alloc - memmory allocation
 * @size: size of the data
 * Description: allocate size
 * Return: char **
 */
char **alloc(int size)
{
	return ((char **) malloc(size));
}
