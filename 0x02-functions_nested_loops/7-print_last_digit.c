#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + r);
	return (r);
}
