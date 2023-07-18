#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - Prints Alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphapet = 'a';
	int i = 0;

	while (i < 9)
	{
		while (alphapet <= 'z')
		{
			putchar(alphapet);
			alphapet++;
		}
		putchar('\n');
		i++;
	}
}
