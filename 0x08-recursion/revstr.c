#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * revstr - Reverse a string
 * @str1: array of characters
 * Return: array of characters
 */
char *revstr(char *str1)
{
	int i;
	int len;
	int temp;

	len = strlen(str1);

	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
	return (str1);
}
