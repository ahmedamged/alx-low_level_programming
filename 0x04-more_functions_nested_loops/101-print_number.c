#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#include "main.h"

/**
 * print_number - Prints a number
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	int printed = 0;
	int d = n;
	int count = 0;

	while(d != 0)
	{
		d = d / 10;
		++count;
	}

	if (n == 0)
	{
		_putchar(n + '0');
	}
	else if (n > 0)
	{
		while (count != 0)
		{
			int power = pow(10, count-1);

			printed = n / power;
			n = n - printed * power;
			_putchar(printed + '0');
			count--;
		}
	}
	else
	{
		n = n * -1;
		_putchar('-');
		while (count != 0)
		{
			int powerr = pow(10, count-1);
			
			printed = n / powerr;
			n = n - printed * powerr;
			_putchar(printed + '0');
			count--;
		}
	}
}
