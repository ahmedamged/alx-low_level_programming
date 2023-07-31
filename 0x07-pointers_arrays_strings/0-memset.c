#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: array of characters
 * @b: Value to be filled
 * @n: Number of bytes to be filled
 * Return: array of characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
