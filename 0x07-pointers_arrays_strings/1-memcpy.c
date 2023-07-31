#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination
 * @src: Source
 * @n: Number of bytes to be copied
 * Return: array of characters
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
