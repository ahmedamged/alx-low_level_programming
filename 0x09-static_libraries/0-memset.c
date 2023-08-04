#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _memset - a function
 * @s: array of characters
 * @b: character
 * @n: unsigned integer
 * Return: array of characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
