#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - a function
 * @src: array of characters
 * @dest: array of characters
 * @n: unsigned integer
 * Return: array of characters
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
