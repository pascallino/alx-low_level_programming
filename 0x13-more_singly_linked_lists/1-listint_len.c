#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the length of a linked list
 * @h: pointer to head node
 * Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t  i = 0;
const listint_t *curr = h;
if (h == NULL)
	return (0);

while (curr != NULL)
{
	curr = curr->next;
	i++;
}
/*printf("-> %d elements\n", i);*/
return (i);
}
