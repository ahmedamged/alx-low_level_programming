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
	int coins = 0;
	int availableCoins[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (i < 5)
		{
			if (cents >= availableCoins[i])
			{
				coins += cents / availableCoins[i];
				cents = cents % availableCoins[i];
			}
			i++;
		}
		printf("%d\n", coins);
		return (0);
	}
}
