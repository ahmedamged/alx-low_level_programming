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
		if (alphapet == 'q' || alphapet == 'e')
		{
		}
		else
		{
			putchar(alphapet);
		}
		alphapet++;
	}
	return (0);
}
