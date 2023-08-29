#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int line;
	int number;
	int process;
	int end;

	for (line = 1; line < 11; line++)
	{
		end = 10;
		for (process = 1; process < 3; process++)
		{
			for (number = 0; number < end; number++)
			{
				if (process == 2)
					_putchar ('1');
				_putchar(number + 48);
			}
			end = 5;
		}
		_putchar('\n');
	}

}
