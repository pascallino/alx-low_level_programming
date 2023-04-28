#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - sum all nodes
 * @head: pointer to head node
 * Return: N
 */
int sum_listint(listint_t *head)
{
	unsigned int n = 0;

	if (!(head))
		return (0);

	while (head)
	{
		n = n + head->n;
		head = head->next;
	}

	return (n);
}
