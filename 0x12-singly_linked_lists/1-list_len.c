#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the length of a linked list
 * @h: pointer to head node
 * Return: Number of nodes
*/

size_t list_len(const list_t *h)
{
size_t  i = 0;
const list_t *curr = h;
if (h == NULL)
	return (0);

while (curr != NULL)
{
	curr = curr->next;
	i++;;
}
/*printf("-> %d elements\n", i);*/
return (i);
}
