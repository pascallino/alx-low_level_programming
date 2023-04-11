#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * Description: allocate grid
 * @width: width
 * @height: height
 * Return: NULL on faliure
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **ptr;

	i = 0;
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	/* allocate memory for a 2D array usinh malloc*/
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			/* allocated by calloc or not */
			if (ptr[i] == NULL)
			{
				for (k = 0; k < i; k++)
					free(ptr[k]);

				free(ptr);
				return (NULL);
			}
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
