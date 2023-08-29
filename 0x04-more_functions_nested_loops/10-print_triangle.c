#include "main.h"
/**
 * print_triangle - function that draw triangle.
 * @size: triangle size.
 */
void print_triangle(int size)
{
	int line;
	int space;
	int hash;

	if (size < 1)
		_putchar('\n');
	else
		for (line = 1; line <= size; line++)
		{
			for (space = size - line; space > 0; space--)
				_putchar(' ');
			for (hash = line; hash > 0 ; hash--)
				_putchar('#');
			_putchar('\n');
		}
}
