#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the size of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
