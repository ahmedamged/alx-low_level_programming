#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int addition = 1;
	int len = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (i == len - 1 && b[i] == '1')
			{
				res += 1;
			}
			if (b[i] == '1' && i != len - 1)
			{
				res += addition;
			}
		}
		else
		{
			return (0);
		}
		addition *= 2;
	}

	return (res);
}
