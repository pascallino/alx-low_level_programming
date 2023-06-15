#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
/**
 * dlistint_len - ==========
 * @h: ===========
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t i = 0;

	if (curr == NULL)
		return (0);
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
