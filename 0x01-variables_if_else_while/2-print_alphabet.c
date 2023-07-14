#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphapet = 'a';

	while (alphapet <= 'z')
	{
		putchar(alphapet);
		alphapet++;
	}
	putchar('\n');
	return (0);
}
