#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int num;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
                                return (1);
			}
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
}
