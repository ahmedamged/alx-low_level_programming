#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s);
	char temp;

	while (i != '\0')
	{
		i++;
	}

	while (i < j--)
	{
		temp = s[i];
		s[i++] = s[j];
		s[j] = temp;
	}
}
