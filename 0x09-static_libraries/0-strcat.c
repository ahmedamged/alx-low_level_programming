#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - a function
 * @src: array of characters
 * @dest: array of characters
 * Return: array of characters
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
