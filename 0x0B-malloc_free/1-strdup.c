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
	char *s;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	s[j + 1] = '\0';
	return (s);
}
