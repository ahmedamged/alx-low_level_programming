#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of the even-valued terms
 * that do not exceed 4000000 in fibonacci sequence
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int first = 1;
	unsigned long int current = 2;
	unsigned long int sum = current;

	while (first + current < 4000000)
	{
		current += first;
		if (current % 2 == 0)
		{
			sum += current;
		}
		first = current - first;
	}
	printf("%lu\n", sum);
	return (0);
}
