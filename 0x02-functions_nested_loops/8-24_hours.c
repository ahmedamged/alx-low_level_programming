#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hoursDig = 0;
	int minutesDig = 0;

	while (hoursDig < 24)
	{
		while (minutesDig < 60)
		{
			printf("%02d:%02d", hoursDig, minutesDig);
			putchar('\n');
			minutesDig++;
		}
		minutesDig = 0;
		hoursDig++;
	}
}
