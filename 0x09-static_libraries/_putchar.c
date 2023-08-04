#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - a function
 * @c: character
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
