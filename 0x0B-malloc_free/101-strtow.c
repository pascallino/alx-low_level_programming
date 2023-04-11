#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - farray.
 * @grid: har.
 * @height: height of the array.
 *
 * Return: no return
 */

void free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **a;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;

	a = malloc((height + 1) * sizeof(char *));

	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (a[i] == NULL)
				{
					free_grid(a, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			a[i][j] = str[a1];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}
