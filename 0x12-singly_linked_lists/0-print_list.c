#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", current->len, current->str);
		}
		current = current->next;
		n++;
	}
	return (n);
}