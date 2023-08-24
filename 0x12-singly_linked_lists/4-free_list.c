#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *current;

	current = head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current->str);
		free(current);
		current = tmp;
	}
}
