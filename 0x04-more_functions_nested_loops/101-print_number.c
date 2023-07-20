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
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	
	if ((num / 10 ) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
