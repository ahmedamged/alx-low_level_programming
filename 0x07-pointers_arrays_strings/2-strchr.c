#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: array of characters
 * @c: the search character
 * Return: pointer to the first occurrence of the character c
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ret = strchr(s, c);

	return (ret);
}
