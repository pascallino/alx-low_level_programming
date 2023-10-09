#include "search_algos.h"
/**
 * _sqrt - calculate the square root of a number
 * @x: number
 * Return: guess
 */
double _sqrt(double x)
{
	double guess = x / 2.0; /*Initial guess, can be any positive value*/
	double prev_guess = 0.0; /*Previous guess*/
	const double epsilon = 0.000001;/* A small value to control the precision*/

	if (x < 0)
	{
		return (-1.0);
	}

	while (fabs(guess - prev_guess) > epsilon)
	{
		prev_guess = guess;
		guess = 0.5 * (guess + x / guess); /*Newton-Raphson formula*/
	}

	return (guess);
}
/**
 * jump_search - split an array into blocks and search between those blocks
 * @array: Arrray
 * @size: size of the array
 * @value: value to search from
 * Return: value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev = 0;
	size_t j;
	int i = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = _sqrt(size);
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		i = prev;

		prev += step;
	}

	printf("Value found between indexes [%d] and [%ld]\n", i, prev);

	for (j = i; j < size && array[j] <= value; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);

		if (array[j] == value)
		{
			return ((int)j);
		}
	}

	return (-1);
}
