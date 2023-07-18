#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - Prints Alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		char alphabet = 'a';
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
		i++;
	}
}
