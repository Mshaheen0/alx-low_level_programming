#include <stdio.h>
/**
 * main - Entery point
 * Descrition: a program that prints all possible combinations
 * of two two-digit numbers.
 * Return: always 0 (successful)
 */
int main(void)
{
	int xx = 0;
	int vv, dd, yy;

	while (xx < 10)
	{
		yy = 0;
		while (yy < 10)
		{
			vv = xx;
			dd = yy + 1;
			while (vv < 10)
			{
				while (dd < 10)
				{
					if (xx == vv && yy == dd)
						dd++;
					else
					{
						putchar(xx + '0');
						putchar(yy + '0');
						putchar(' ');
						putchar(vv + '0');
						putchar(dd + '0');
					if (xx == 9 && yy == 8)
					break;
						putchar(',');
						putchar(' ');
						dd++;
					}
				}
				vv++;
				dd = 0;
			}
			yy++;
		}
		xx++;
	}
	putchar('\n');
	return (0);
}
