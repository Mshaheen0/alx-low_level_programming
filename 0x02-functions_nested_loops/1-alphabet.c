#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet(void)
{
	char xx = 'a';

	for (xx = 'a'; xx <= 'z'; xx++)
		_putchar(xx);
	_putchar('\n');
}
