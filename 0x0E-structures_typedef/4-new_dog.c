#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = cname;
	d->age = age;
	d->owner = cowner;

	return (d);
}
