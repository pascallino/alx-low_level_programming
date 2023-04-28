#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * addNode - Add a node
 * @new_data: pointer to head node
 * @head_ref: headnode
 * Return: Head node
 */

listint_t *addNode(listint_t **head_ref,
		const int new_data)
{
	/* Allocate memory for new node*/
	listint_t *new_node;
	listint_t *last;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

/*	if (new_data == NULL)*/
/*	{*/
/*		free(new_node);*/
/*		return (NULL);*/
/*	}*/
	/* Assign data to new node*/
	new_node->n = new_data;
	new_node->next = NULL;
	/* Set next pointer of new node to NULL as it will be added at the end*/
	/* If the linked list is empty, set the new node as the head of the list*/
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return (*head_ref);
	}
	else
	{
		/* Traverse the linked list till the end*/
		last = *head_ref;
		while (last->next != NULL)
		{
			last = last->next;
		}
	}
	/* Add the new node at the end*/
	last->next = new_node;

	return (*head_ref);
}


/**
 * add_nodeint_end - return the length of a linked list
 * @head: head node
 * @n: string e
 * Return: Number of nodes
 */

listint_t *add_nodeint_end(listint_t **head,
		const int n)
{
	return (addNode(head, n));
}
