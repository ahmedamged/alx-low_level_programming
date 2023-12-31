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
	int m = n - 1;

	while (i < m)
	{
		int temp = a[i];

		a[i] = a[m];
		a[m] = temp;
		i++;
		m--;
	}
}
