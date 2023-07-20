#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_times_table - Prints a time table for a number
                    from 0 to 15
 * @n: the number
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				int r = i * j;

				printf("%d", r);
				if (j != n)
				{
					putchar(',');
					putchar(' ');
					if ((i * (j+1)) < 10)
					{
						putchar(' ');
						putchar(' ');
					}
					else if ((i * (j+1)) < 100)
					{
						putchar(' ');
					}
				}
				j++;
			}
			putchar('\n');
			j = 0;
			i++;
		}
	}
}
