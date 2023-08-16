#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to be printed
 * @f: the function that is used for printing
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
