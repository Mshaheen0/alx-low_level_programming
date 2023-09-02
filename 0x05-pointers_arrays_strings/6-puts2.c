#include "main.h"
/**
 * puts2 - a function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: the string that we will play with.
 */

void puts2(char *str)
{
	int sk;

	for (sk = 0; *(str + sk) != '\0'; sk += 2)
	{
		_putchar(*(str + sk));
	}
	_putchar('\n');
}

