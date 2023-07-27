#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: array of integers
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int *temp = malloc(n * sizeof(int));
	int m = n;

	memcpy(temp, a, n * sizeof(int));
	while (i < n)
	{
		m--;
		temp[i] = a[m];
		i++;
	}
	memcpy(a, temp, n * sizeof(int));
}
