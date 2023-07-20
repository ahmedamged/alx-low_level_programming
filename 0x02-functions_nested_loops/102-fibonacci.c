#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int first = 0;
	unsigned long int current = 1;
	int i = 0;

	printf("%lu", first);
	putchar(',');
	putchar(' ');
	printf("%lu", current);
	putchar(',');
	putchar(' ');
	while (i < 50)
	{
		unsigned long int result = current + first;

		first = current;
		current = result;
		printf("%lu", result);
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
