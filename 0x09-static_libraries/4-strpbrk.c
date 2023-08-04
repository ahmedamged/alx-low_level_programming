#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - a function
 * @s: array of characters
 * @accept: array of characters
 * Return: array of characters
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret = strpbrk(s, accept);

	return (ret);
}
