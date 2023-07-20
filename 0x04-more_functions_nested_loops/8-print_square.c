#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - Prints a square
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;
		int j = 0;

		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
}
