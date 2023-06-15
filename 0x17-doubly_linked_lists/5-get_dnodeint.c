#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
 * print_dlistint - ==========
 * @h: ===========
 * Return: int
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	if (!(head) || !(index >= i))
		return (NULL);
	if (i == index)
		return (curr);

	while (curr)
	{
		curr = curr->next;
		i++;
		if (i == index)
			break;
	}
	return (curr);
}
