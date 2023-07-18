#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _islower - Checks lowercase alphabet
 * @c: charachter
 * Return: 1 if lowercase charachter 0 otherwise
 */
int _islower(int c)
{
	int r;
	int m = 0;
	int n = 1;

	r = islower(c);
	if (r == 0)
	{
		return m;
	}
	else
	{
		return n;
	}
}
