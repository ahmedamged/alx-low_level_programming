#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isalpha - Checks for alphabetic character
 * @c: charachter
 * Return: 1 if c is a letter 0 otherwise
 */
int _isalpha(int c)
{
	int r;

	r = isalpha(c);
	if (r == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
