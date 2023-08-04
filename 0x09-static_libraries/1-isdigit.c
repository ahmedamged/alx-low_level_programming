#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _isdigit - a function
 * @c: integer
 * Return: integer
 */
int _isdigit(int c)
{
	int r = isdigit(c);

	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
