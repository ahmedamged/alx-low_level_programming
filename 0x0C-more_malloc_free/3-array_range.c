#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: the min number
 * @max: the max number
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *c;
	int i = 0;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (max - min + 2));
	if (c == NULL)
		return (NULL);
	while (min <= max)
	{
		c[i] = min;
		min++;
		i++;
	}
	return (c);
}
