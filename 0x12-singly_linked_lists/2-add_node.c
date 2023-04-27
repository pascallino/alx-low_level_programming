#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * addNode - Add a node
 * @new_data: pointer to head node
 * Description: add new node
 * @head_ref: ===
 * Return: Head node
 */
list_t  *addNode(list_t **head_ref, const char *new_data)
{
	/* Allocate memory for new node*/
	list_t *new_node;
	int len = 0;


	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (new_data == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Assign data to new node*/
	new_node->str = strdup(new_data);
	len = strlen(new_data);
	new_node->len = len;
	new_node->next = *head_ref;
	/* Set next pointer of new node to NULL as it will be added at the end*/
	/* If the linked list is empty, set the new node as the head of the list*/

	*head_ref = new_node;


	return (*head_ref);
}


/**
 * add_node - return the length of a linked list
 * @head: pointer to head node
 * @str: ======
 * Return: Number of nodes
 */

	list_t *add_node(list_t **head,
		const char *str)
{
	return (addNode(head, str));
}
