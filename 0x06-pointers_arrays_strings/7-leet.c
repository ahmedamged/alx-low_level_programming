#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: array of characters
 * Return: array of characters
 */
char *leet(char *n)
{
	int i = 0;
	int m = 0;
	int a[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int b[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (n[i] != '\0')
	{
		while (m < 10)
		{
			if(n[i] == a[m])
			{
				n[i] = b[m];
			}
			m++;
		}
	m = 0;
	i++;
	}
	return (n);
}
