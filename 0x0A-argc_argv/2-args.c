#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of strings which are arguments
 * Return: Always 0 - (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
