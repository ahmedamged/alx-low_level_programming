#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - Copies a string
 * @s1: the source string
 * @s2: the destination string
 * Return: integer less than, equal to, or greater than zero
 * if s1 is found, respectively, 
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int y = strcmp(s1, s2);
	return (y);
}
