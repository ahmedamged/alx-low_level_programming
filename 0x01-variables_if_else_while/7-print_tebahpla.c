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
	char reversedAlphapet = 'z';

	while (reversedAlphapet >= 'a')
	{
		putchar(reversedAlphapet);
		reversedAlphapet--;
	}
	putchar('\n');
	return (0);
}
