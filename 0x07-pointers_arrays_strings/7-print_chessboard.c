#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D Array of 8
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		putchar('\n');
		i++;
		j = 0;
	}
}
