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
		for (a = 0; a < 10; a++)
		{
			if (a * n < 10)
			{
				_putchar((n * a) + '0');
				_putchar(' ');
			}
			else
			{
				_putchar((n * a / 10) + '0');
				_putchar(((n * a) % 10) + '0');
			}
			if (a == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
