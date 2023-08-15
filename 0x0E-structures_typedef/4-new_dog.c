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
	char *cname = malloc(strlen(name) * sizeof(char));
	char *cowner = malloc(strlen(owner) * sizeof(char));

	dog_t *d;

	memcpy(cname, name, strlen(name));
	memcpy(cowner, owner, strlen(owner));

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = cname;
	d->age = age;
	d->owner = cowner;

	return (d);
}
