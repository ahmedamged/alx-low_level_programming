#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to linked list head
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(struct list));
	list_t *last;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if(*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}

	return (*head);
}
