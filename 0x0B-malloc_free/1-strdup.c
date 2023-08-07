#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The size of the array
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s = strdup(str);

	if (str == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		printf ("failed to allocate memory");
		return (NULL);
	}
	return (s);
}
