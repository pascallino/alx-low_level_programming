#include "search_algos.h"
/**
 * _sqroot - calculate the square root of a number
 * @x: number
 * Return: guess
 */
double _sqroot(double x)
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
 * jump_list - split an array into blocks and search between those blocks
 * @list: Arrray
 * @size: size of the array
 * @value: value to search from
 * Return: pointer or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = _sqroot(size);
	listint_t *current = list, *prev = NULL;
	size_t i;

	if (list == NULL || size == 0)
		return (NULL);

	while (current && current->n < value && current->index + 1 < size)
	{
		prev = current;
		for (i = 0; current && i < jump; i++)
		{
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->next == NULL)
		{
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
