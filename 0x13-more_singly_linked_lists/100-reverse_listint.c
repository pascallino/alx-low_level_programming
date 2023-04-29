#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse a node
 * @head: headnode
 * Return: Head node
 */

listint_t *reverse_listint(listint_t **head)
{
	/* Allocate memory for new node*/
	listint_t *prev = NULL;
	listint_t *next = prev;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (NULL);

	/*	if (new_data == NULL)*/
	/*	{*/
	/*		free(new_node);*/
	/*		return (NULL);*/

	/* Traverse the linked list till the end*/
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	/* Add the new node at the end*/
	*head = prev;

	return (*head);
}

