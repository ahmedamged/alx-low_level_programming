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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
