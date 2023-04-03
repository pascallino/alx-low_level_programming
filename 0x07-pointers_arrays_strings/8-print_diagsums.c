#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints all  the sum of the two
 * diagonals of a square matrix of integers
 * @a: The matrix of integers
 * @size: The size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int indx1;
	int indx2;
	int i;
	int j;
	int sum1;
	int sum2;
	int a1[100][100];
	int loop = 0;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			a1[i][j] = a[loop];
			loop++;
		}
	}

	for (indx1 = 0; indx1 < size; indx1++)
	{
		for (indx2 = 0; indx2 < size; indx2++)
		{
			if (indx1 == indx2)
			{
				sum1 = sum1 + a1[indx1][indx2];
			}
		}
	}
	for (indx2 = 0; indx2 < size; ++indx2)
		sum2 = sum2 + (a1[indx2][size - indx2 - 1]);

	printf("%d, %d\n", sum1, sum2);
}
