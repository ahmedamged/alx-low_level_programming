#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @n: array of characters
 * Return: array of characters
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] == ' ' || n[i] == '\t'
		|| n[i] == '\n' || n[i] == ','
		|| n[i] == ';' || n[i] == '.'
		|| n[i] == '!' || n[i] == '?'
		|| n[i] == '"' || n[i] == '('
		|| n[i] == ')' || n[i] == '{'
		|| n[i] == '}')
		{
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
		i++;
	}

	return (n);
}
