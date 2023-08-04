#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - a function
 * @haystack: array of characters
 * @needle: array of characters
 * Return: array of characters
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret = strstr(haystack, needle);

	return (ret);
}
