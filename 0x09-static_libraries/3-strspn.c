#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - a function
 * @s: array of characters
 * @accept: array of characters
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
