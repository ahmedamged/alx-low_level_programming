#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int first = 0;
	unsigned long int current = 1;
	int i = 0;

	while (i < 96)
	{
		unsigned long int result = current + first;

		first = current;
		current = result;
		printf("%lu", result);
		if (i != 95)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
