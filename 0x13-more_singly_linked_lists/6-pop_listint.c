#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - remove the head and return the key
 * @head: pointer to head node
 * Return: N
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
