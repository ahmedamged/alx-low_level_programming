#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - a function
 * @src: array of characters
 * @dest: array of characters
 * @n: integer
 * Return: array of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
