#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: the size of the square
 */

void print_square(int size)
{
	int n;
	int u;

	for (n = 0; n < size; n++)
	{
		for (u = 0; u < size; u++)
			_putchar('#');
		_putchar('\n');
	}
}

