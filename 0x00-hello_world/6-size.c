#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longIntegerType;
	long long int longLongIntegerType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntegerType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntegerType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
