#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - Gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret = strpbrk(s, accept);

	return (ret);
}
