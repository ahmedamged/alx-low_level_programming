#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_to_98 - Prints all numbers till reaches 98
 * @n: the number to start with
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
