#include "lists.h"
size_t print_dlistint(const dlistint_t *h);
/**
 * print_dlistint - ==========
 * @h: ===========
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t i = 0;

	if (curr == NULL)
		return (0);
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		i++;
	}
	return (i);
}
