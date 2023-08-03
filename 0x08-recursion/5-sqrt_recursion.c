#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * square_root - Returns the natural square root of a number
 * @n: integer
 * @x: iterator
 * Return: the natural square root of a number
 */
int square_root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x <= n)
	{
		return (square_root(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: integer
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (square_root(n, 2));
}
