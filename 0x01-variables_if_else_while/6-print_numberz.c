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
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
