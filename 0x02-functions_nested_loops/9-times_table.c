#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */
void times_table(void)
{
	int horizontal = 0;
	int vertical = 0;
	int result = 0;

	while (horizontal < 10)
	{
		while (vertical < 10)
		{
			result = horizontal * vertical;
			printf("%d", result);
			if (vertical != 9)
			{
				putchar(',');
				putchar(' ');
				if (horizontal * (vertical + 1) < 10)
				{
					putchar(' ');
				}
			}
			vertical++;
		}
		putchar('\n');
		vertical = 0;
		horizontal++;
	}
}
