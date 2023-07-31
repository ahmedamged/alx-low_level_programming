#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: the value of a pointer
 * @to: the array of charachters that we want to point to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
