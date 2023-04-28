#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct listint_s - singly linked lis
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
size_t list_len(const listint_t *h);
listint_t *add_node(listint_t **head, const char *str);
listint_t *add_node_end(listint_t **head, const char *str);
listint_t *addNode(listint_t **head_ref, const char *new_data);
void free_list(listint_t *head);

#endif /* LIST_H */
