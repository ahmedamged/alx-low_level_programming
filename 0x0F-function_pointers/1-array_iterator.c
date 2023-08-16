#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: the function that is used for printing
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = 0;

	if (!array || !size || !action)
		return;
	while (x < (int)size)
	{
		action(array[x]);
		x++;
	}
}
