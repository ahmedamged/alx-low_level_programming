#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _isalpha - a function
 * @c: integer
 * Return: integer
 */
int _isalpha(int c)
{
	int r;

	r = isalpha(c);
	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
