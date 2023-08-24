#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @h: linked list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(struct list));
	
	newNode->str = (char *)str;
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
