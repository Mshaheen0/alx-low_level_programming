#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n;
	int a;
	int prod;

	for (n = 0; n < 10; n++)
	{
		_putchar(48);
		for (a = 1; a < 10; a++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * a;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
