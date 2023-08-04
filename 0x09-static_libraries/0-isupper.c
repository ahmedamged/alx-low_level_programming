#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _isupper - a function
 * @c: integer
 * Return: integer
 */
int _isupper(int c)
{
	int r = isupper(c);

	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
