#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * fibonacci: Prints the first 98 Fibonacci numbers
 * Return: void
 */
void fibonacci(void)
{
        int first = 0;
	int current = 1;
	int i = 0;

	printf("%d", first);
	putchar(',');
	putchar(' ');
	printf("%d", current);
	putchar(',');
	putchar(' ');

	while (i < 96)
	{
		int result = current + first;
		first = current;
		current = result;
		printf("%d", result);
		if (i != 95)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
}
