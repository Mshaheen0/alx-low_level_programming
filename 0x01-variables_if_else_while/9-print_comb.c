#include <stdio.h>
/**
 * main - Entery point
 * Descrition: Write a program that prints all possible combinations of
 * single-digit numbers.
 * Return: always 0 (successful)
 */
int main(void)
{
	int xx = 0;
	int yy = 0;

	while (xx < 10)
	{
		int yy = 0;

		while (yy < 10)
		{
			putchar(xx + '0');
			putchar(yy + '0');
			if (xx + '0' == '9' && yy + '0' == '9')
				break;
			putchar(',');
			putchar(' ');
			yy++;
		}
		xx++;
	}
	return (0);
}
