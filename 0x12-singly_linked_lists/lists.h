#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list - singly link list
 * * @str: char arraya
 * @len: length 
 * @next: pointer
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
list_t  *addNode(list_t** head_ref, const char *new_data);
void free_list(list_t *head);

#endif /* LIST_H */
