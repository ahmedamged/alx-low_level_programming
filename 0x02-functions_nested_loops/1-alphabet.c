#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* print_alphabet - Prints Alphabet */
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
