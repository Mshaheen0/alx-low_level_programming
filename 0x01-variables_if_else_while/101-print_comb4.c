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
	int yy;
	int vv;

	while (xx < 10)
	{
		yy = xx + 1;
		while (yy < 10)
		{
			vv = yy + 1;
			while (vv < 10)
			{
				putchar(xx + '0');
				putchar(yy + '0');
				putchar(vv + '0');
				if (xx + '0' == '7' && yy + '0' == '8' && vv + '0' == '9')
					break;
				putchar(',');
				putchar(' ');
				vv++;
			}
			yy++;
		}
		xx++;
	}
	putchar('\n');
	return (0);
}
