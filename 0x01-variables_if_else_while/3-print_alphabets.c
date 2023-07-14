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
	char lowerAlphapet = 'a';
	char upperAlphapet = 'A';

	while (lowerAlphapet <= 'z')
	{
		putchar(lowerAlphapet);
		lowerAlphapet++;
	}
	while (upperAlphapet <= 'Z')
	{
		putchar(upperAlphapet);
		upperAlphapet++;
	}
	putchar('\n');
	return (0);
}
