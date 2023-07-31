#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret = strstr(haystack, needle);

	return (ret);
}

