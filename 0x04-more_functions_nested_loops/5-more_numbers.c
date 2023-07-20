#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers,
 *		from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int x = 0;

	while (i < 10)
	{
		while (x < 15)
		{
			int z;

			if (x >= 10)
			{
				z = x / 10;
			}
			else
			{
				z = x % 10;
			}
			_putchar(z + '0');
			if (x >= 10)
			{
				int y = x % 10;

				_putchar(y + '0');
			}
			x++;
		}
		_putchar('\n');
		x = 0;
		i++;
	}
}
