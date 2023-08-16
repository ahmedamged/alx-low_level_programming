#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the function to be used to compare values
 * Return: index where it finds it or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;
	int res = 0;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]) == 1)
		{
			res = x;
			break;
		}
		x++;
	}
	if (res == 0)
		return (-1);
	else
		return (res);
}
