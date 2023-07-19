#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * fibonacci: Prints the first 98 Fibonacci numbers
 * Return: void
 */
void fibonacci(void)
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
}
