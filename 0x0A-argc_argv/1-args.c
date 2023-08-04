#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: a program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of strings which are arguments
 * Return: Always 0 - (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	if (strlen(argv[0]) > 0)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
