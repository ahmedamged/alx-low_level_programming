#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _islower - a function
 * @c: integer
 * Return: integer
 */
int _islower(int c)
{
	int r;

	r = islower(c);
	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
