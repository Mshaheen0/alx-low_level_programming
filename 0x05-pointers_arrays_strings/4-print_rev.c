#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse, followed
 * by a new line.
 * @s: the string to be reversed.
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;
	while (n--)
		_putchar(s[n]);
	_putchar('\n');
}

