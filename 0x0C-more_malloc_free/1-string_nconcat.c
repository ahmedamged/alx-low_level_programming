#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: the number of charchters to be concatenated
 * Return: Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	int i = 0;
	int totalLength = 0;
	int m = 0;
	unsigned int j = 0;
	unsigned int o = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	totalLength += i;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
	{
		totalLength += j;
		n = j;
	}
	else
		totalLength += n;
	res = malloc(sizeof(char) * (totalLength + 1));
	if (res == NULL)
		return (NULL);
	while (s1[m] != '\0')
	{
		res[m] = s1[m];
		m++;
	}
	while (o < n)
	{
		res[m] = s2[o];
		m++;
		o++;
	}
	res[m] = '\0';
	return (res);
}
