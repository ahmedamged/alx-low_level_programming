#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - a function
 * @s: array of characters
 * @c: character
 * Return: array of characters
 */
char *_strchr(char *s, char c)
{
	char *ret = strchr(s, c);

	return (ret);
}
