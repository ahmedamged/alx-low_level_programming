#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_sign - Prints the sign of a number
 * @n: number
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int m = 1;
	int n = -1;
	int b = 0;

	if (n > 0)
	{
		printf("+");
		return (m);
	}
	else if (n < 0)
	{
		printf("-");
		return (n);
	}
	else
	{
		printf("0");
		return (b);
	}
}
