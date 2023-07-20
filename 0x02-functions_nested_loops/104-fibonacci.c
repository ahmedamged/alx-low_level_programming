#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int first = 0;
	unsigned long int current = 1;
	unsigned long int first_half1, first_half2, current_half1, current_half2 = 0;
	unsigned long int half1, half2 = 0;
	int i = 0;
	int j = 93;

	while (i < 92)
	{
		unsigned long int result = current + first;

		first = current, current = result;
		printf("%lu", result);
		printf(", ");
		i++;
	}
	first_half1 = first / LARGEST;
	current_half1 = current / LARGEST;
	first_half2 = first % LARGEST;
	current_half2 = current % LARGEST;
	while (j <= 98)
	{
		half1 = first_half1 + current_half1;
		half2 = first_half2 + current_half2;
		if (first_half2 + current_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (j != 98)
		{
			printf(", ");
		}
		first_half1 = current_half1, first_half2 = current_half2;
		current_half1 = half1, current_half2 = half2;
		j++;
	}
	putchar('\n');
	return (0);
}
