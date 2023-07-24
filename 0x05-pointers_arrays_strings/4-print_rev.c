#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		putchar(s[--i]);
	}
	putchar('\n');
}
