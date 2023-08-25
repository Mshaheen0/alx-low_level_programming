#include <stdio.h>
/**
 * main - Entery point
 * Descrition: Write a program that prints all possible combinations of
 * single-digit numbers.
 * Return: always 0 (successful)
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		int y = 0;

		while (y < 10)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x + '0' == '9' && y + '0' == '9')
				break;
			putchar(',');
			putchar(' ');
			y++;
		}
		x++;
	}
	return (0);
}
