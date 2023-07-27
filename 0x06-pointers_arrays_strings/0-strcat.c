#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: the source string
 * @dest: the destination string 
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
