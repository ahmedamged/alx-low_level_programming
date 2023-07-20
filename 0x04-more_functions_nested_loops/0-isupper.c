#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isupper - Checks if charachter c is uppercase
 * @c: charachter
 * Return: 1 if c is uppercase, 0 otherwise
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
