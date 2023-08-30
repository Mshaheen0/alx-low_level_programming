#include <stdio.h>
#include "main.h"
/**
 * print_number - a function that prints an integer without printf.
 * @n: the integer.
 */
void print_number(int n)
{
	unsigned int xx = n;

	if (n < 0)
	{
		_putchar('-');
		xx = -xx;
	}
	if ((xx / 10) > 0)
		print_number(xx / 10);
	_putchar((xx % 10) + 48);
}
