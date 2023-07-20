#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if c is numeric
 * @c: integer
 * Return: 1 if c is numeric, 0 otherwise
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
