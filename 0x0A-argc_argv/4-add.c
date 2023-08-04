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
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
}
