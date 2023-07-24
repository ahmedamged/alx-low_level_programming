#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: a destination for a string to be copied to
 * @src: Source of a string that will be copied
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
