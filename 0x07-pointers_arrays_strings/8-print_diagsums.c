#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: 2D Array of integers
 * @size: array size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int firstSum = 0;
	int secondSum = 0;

	while (i < size)
	{
		while (j < size)
		{
			if (i == j)
			{
				firstSum += a[k];
			}
			if (i + j == size - 1)
			{
				secondSum += a[k];
			}
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	printf("%d, %d\n", firstSum, secondSum);
}
