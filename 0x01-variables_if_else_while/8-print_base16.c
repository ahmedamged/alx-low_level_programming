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
	char number = '0';
	char alphapet = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (alphapet <= 'f')
	{
		putchar(alphapet);
		alphapet++;
	}
	putchar('\n');
	return (0);
}
