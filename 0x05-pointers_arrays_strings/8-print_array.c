#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * print_array - Prints half of a string
 * @a: array of integers
 * @n: the number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;
	int temp;

	while (j < n)
	{
		temp = a[j];
		printf ("%d", temp);
		if (j != n - 1) 
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	putchar('\n');
}
