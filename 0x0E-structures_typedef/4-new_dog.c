#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @d: the dog structure
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

	if (d != NULL)
		return (d);
	else
		return (NULL);
}
