#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int a2[100];
	int i = 0;
	int k = n;

	n = n - 1;
	while (n >= 0)
	{
		a2[i] = a[n];
		n--;
		i++;
	}

	for (i = 0; i < k ; i++)
	{
		a[i] = a2[i];
	}
}
