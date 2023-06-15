#include "lists.h"
int sum_dlistint(dlistint_t *head);
/**
 * print_dlistint - ==========
 * @h: ===========
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	if (curr == NULL)
		return (0);
	while (curr != NULL)
	{
		sum = sum + curr->n;
		curr = curr->next;
	}
	return (sum);
}
