#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number that draws _ line based on it
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
