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
	int lenstr = strlen(s);
	char temp;
	int i = lenstr;

	while (i >= 0)
	{
		temp = s[i];
		printf("%c", temp);
		i--;
	}
	putchar('\0');
	putchar('\n');
}
