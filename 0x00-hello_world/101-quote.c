#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'Used write function to print a quote'
 *
 * Return: 1 (Success)
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
