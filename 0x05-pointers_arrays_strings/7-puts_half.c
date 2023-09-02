#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: string that we will play with.
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		int f2 = (len / 2);

		while (f2 < len)
		{
			_putchar(str[f2]);
			f2++;
		}
	}
	else if (len % 2 != 0)
	{
		int odd_f2 = ((len - 1) / 2) + 1;

		while (odd_f2 < len)
		{
			_putchar(str[odd_f2]);
			odd_f2++;
		}
	}
	_putchar('\n');
}

