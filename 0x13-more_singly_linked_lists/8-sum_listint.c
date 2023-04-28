#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - find node using index
 * @head: pointer to head node
 * @index: position of the node
 * Return: N
 */
listint_t *get_nodeint_at_index(listint_t *head,
		unsigned int index)
{
	unsigned int n = 0;

	if (!(head) || !(index >= n))
		return (NULL);
	if (n == index)
	       return (head);	

	
	while (head)
	{
	head = head->next;
	n = n + 1;
	if ( n == index)
		break;

	}

	return (head);
}
