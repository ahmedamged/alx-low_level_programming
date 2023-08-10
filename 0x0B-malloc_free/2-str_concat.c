#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0;
	int j = 0;
	int totalLength = 0;
	int m = 0;
	int n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	totalLength += i;
	totalLength += j;
	res = malloc(sizeof(char) * (totalLength + 1));
	if (res == NULL)
		return (NULL);
	while (s1[m] != '\0')
	{
		res[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		res[m] = s2[n];
		n++;
		m++;
	}
	res[m] = '\0';

	return (res);
}
