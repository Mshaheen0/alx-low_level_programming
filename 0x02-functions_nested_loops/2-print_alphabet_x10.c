#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void);
{
	char xx = 'a';
	int cal;

	for (cal = 0; cal < 10; cal++)
	{
	for (xx = 'a'; xx <= 'z'; xx++)
		_putchar(xx);
	_putchar('\n');
	}
}
