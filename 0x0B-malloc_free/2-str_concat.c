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
	int o = 0;
	int m = 0;
	int n = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
		totalLength += i;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
		totalLength += j;
	}
	if (s1 == NULL && s2 != NULL)
	{
		res = malloc(sizeof(char) * totalLength + 1);
		res[0] = ' ';
		o = 1;
		while (o < totalLength)
		{
			if (s2[n] != '\0')
			{
				res[o] = s2[n];
				n++;
			}
		}
	}
	else if (s1 != NULL && s2 == NULL)
	{
		res = malloc(sizeof(char) * totalLength + 1);
		res[totalLength + 1] = ' ';
		while (o < totalLength)
		{
			if (s1[m] != '\0')
			{
				res[o] = s1[m];
				m++;
			}
		}
	}
	else if (s1 == NULL && s2 == NULL)
	{
		res = malloc(sizeof(char) * 2);
		res[0] = ' ';
		res[1] = ' ';
	}
	else
	{
		res = malloc(sizeof(char) * totalLength);
		while (o < totalLength)
		{
			if (s1[m] != '\0')
			{
				res[o] = s1[m];
				m++;
			}
			else
			{
				res[o] = s2[n];
				n++;
			}
			o++;
		}
		res[o + 1] = '\0';
	}
	return (res);
}
