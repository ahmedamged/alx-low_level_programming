#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * @n: number of bytes from src
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
