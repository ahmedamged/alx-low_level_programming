#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * has_a_modulus - Checks if a number is a prime number
 * @n: integer
 * @x: iterator
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int has_a_modulus(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (has_a_modulus(n, x + 1));
	}
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: integer
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (has_a_modulus(n, 2));
	}
}
