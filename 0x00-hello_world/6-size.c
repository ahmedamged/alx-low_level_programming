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
	
	printf("Size of char: %ld byte(s)\n",sizeof(charType));
	printf("Size of int: %ld byte(s)\n",sizeof(integerType));
	printf("Size of long int: %ld byte(s)\n",sizeof(longIntegerType));
	printf("Size of long long int: %ld byte(s)\n",sizeof(longLongIntegerType));
	printf("Size of float: %ld byte(s)\n",sizeof(floatType));

	return (0);
}
