#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line except 2 and 4 .
 */

void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count == 2 || count == 4)
		{
			continue;
		}
		else
			_putchar(count + 48);
	}
	_putchar('\n');
}

