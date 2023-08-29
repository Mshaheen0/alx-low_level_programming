#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the length of line
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');

}

