#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int xx = 0;
	int vv, dd, yy;

	while (xx < 3)
	{
		yy = 0;
		while (yy < 10)
		{
			vv = 0;
			while (vv < 6)
			{
				dd = 0;
				while (dd < 10)
				{
					_putchar(xx + '0');
					_putchar(yy + '0');
					_putchar(':');
					_putchar(vv + '0');
					_putchar(dd + '0');
					_putchar('\n');
					dd++;
					if (xx > 1 && yy > 3)
						break;
				}
				vv++;
				if (xx > 1 && yy > 3)
					break;
			}
			if (xx > 1 && yy > 2)
				break;
			yy++;
		}
		if (xx > 1 && yy > 3)
			break;
		xx++;
	}
}
