#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: array of charachters
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;
	char ch;
	char *str = malloc(strlen(s));

	while (i > j)
	{
		ch = s[i];
		str[i] = s[j];
		str[j] = ch;
		i--;
		j++;
	}
	puts(str);
}
