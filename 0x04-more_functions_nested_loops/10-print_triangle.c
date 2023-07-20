#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;
		int j = 0;
		int l = 0;

		while (i < size)
		{
			while (j < size-i-1)
			{
				_putchar(' ');
				j++;
			}
			while (l < i+1)
			{
				_putchar('#');
				l++;
			}
			_putchar('\n');
			j = 0;
			l = 0;
			i++;
		}
	}
}
