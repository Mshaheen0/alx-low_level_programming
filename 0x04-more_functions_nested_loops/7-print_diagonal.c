#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the length of the line.
 */
void print_diagonal(int n)
{
	int length;
	int space;

	for (length = 1; length <= n; length++)
	{
		if (length > 1)
		{
			for (space = 1; space < length; space++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

