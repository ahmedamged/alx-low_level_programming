#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: array of characters
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;
	char ch;
	char *str = malloc(strlen(s));

	if (strlen(s) == 0)
	{
		return (1);
	}
	while (i > 0)
	{
		ch = s[i];
		str[i] = s[j];
		str[j] = ch;
		i--;
		j++;
	}
	if (strcmp(str, s) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
