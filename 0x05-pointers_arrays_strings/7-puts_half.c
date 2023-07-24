#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j = 0;
	char temp;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 0)
	{
		i = j / 2;
	}
	else
	{
		i = (j + 1) / 2;
	}
	while (i < j)
	{
		temp = str[i];
		printf("%c", temp);
		i++;
	}
	putchar('\n');
}
