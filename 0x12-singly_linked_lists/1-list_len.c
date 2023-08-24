#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
