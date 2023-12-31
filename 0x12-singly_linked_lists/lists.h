#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - linked list
 * @str: string
 * @len: the length of the string
 * @next: the pointer to the next node
 * Description: linked list
 */
struct list
{
	char *str;
	int len;
	struct list *next;
};

typedef struct list list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
