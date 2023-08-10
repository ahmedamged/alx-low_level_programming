#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * strlength - Returns the length of a string
 * @s1: array of characteres
 * Return: the length of this array
 */
int strlength(char *s1)
{
	int len = 0;

	while (s1[len] != '\0')
	{
		len++;
	}
	return (len);
}
