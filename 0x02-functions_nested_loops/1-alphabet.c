#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'The program description'
 * Return: always 0 (success)
 */

/* print_alphapet - Prints Alphapet */
void print_alphabet(void);

int main(void)
{
	print_alphapet();
	return (0);
}

/* print_alphapet - Prints Alphapet */
void print_alphabet(void)
{
	char alphapet = 'a';

	while (alphapet <= 'z')
	{
		putchar(alphapet);
		alphapet++;
	}
	putchar('\n');
}
