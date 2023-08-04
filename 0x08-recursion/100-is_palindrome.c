#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * palindrome - Checks if a string is a palindrome
 * @s: array of characters
 * @i: iterator from the beginning
 * @j: iterator from the end
 * Return: 1 if a string is a palindrome and 0 if not
 */
int palindrome(char *s, int i, int j)
{
	if (s[i] == s[j] && i == j)
	{
		return (1);
	}
	else if (s[i] == s[j] && i == j - 1)
	{
		return (1);
	}
	else
	{
		if (j > i)
		{
			return (palindrome(s, i + 1, j - 1));
		}
		else
		{
			return (0);
		}
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: array of characters
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	else
	{
		int result = palindrome(s, 0, len - 1);

		return (result);
	}
}
