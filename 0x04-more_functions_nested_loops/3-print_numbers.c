#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 */
void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
		_putchar(count + 48);
	_putchar('\n');
}
