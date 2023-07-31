#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
