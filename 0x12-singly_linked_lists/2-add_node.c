#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * addnode - Add a node
 * @new_data: pointer to head node
 * Return: Head node
 */
list_t  *addNode(list_t** head_ref, const char *new_data)
{
	/* Allocate memory for new node*/
	list_t *new_node;
	list_t *last = NULL;
	
	new_node = (list_t*)malloc(sizeof(list_t));
	if (new_node == NULL)
			return (NULL);
    /* Assign data to new node*/
    new_node->str = strdup(new_data);
    /* Set next pointer of new node to NULL as it will be added at the end*/
    new_node->next = NULL;
    /* If the linked list is empty, set the new node as the head of the list*/
    if (*head_ref == NULL) 
    {
        *head_ref = new_node;
        return (*head_ref);
    }
    /* Traverse the linked list till the end*/
    last = *head_ref;
    while (last->next != NULL)
        last = last->next;
    /* Add the new node at the end*/
    last->next = new_node;
    return (*head_ref);
}


/**
 * add_node - return the length of a linked list
 * @h: pointer to head node
 * Return: Number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{

return (addNode(head, str));;
}
