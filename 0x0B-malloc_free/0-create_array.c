#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: character
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i = 0;
	int signedIntSize = (int) size;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < signedIntSize + 1)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
