#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n;
	int a;

	for (n = 0; n < 10; n++)
	{
		_putchar((n * 0) + '0');
		for (a = 0; a < 10; a++)
		{
			_putchar((n * a) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
