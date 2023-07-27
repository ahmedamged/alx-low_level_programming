#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Copies a string
 * @src: the source string
 * @dest: the destination string
 * @n: number of bytes from src
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
