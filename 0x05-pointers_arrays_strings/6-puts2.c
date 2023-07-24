#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Puts even positions of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[j] != '\0')
	{
		j++;
	}
	while (i < j)
	{
		if (i % 2 == 0)
		{
			temp = str[i];
			printf("%c", temp);
		}
		i++;
	}
	putchar('\n');
}
