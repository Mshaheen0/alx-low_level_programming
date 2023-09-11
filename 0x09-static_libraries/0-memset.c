#include "main.h"
/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: pointer.
 * @b: constant.
 * @n: maximum bytes.
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int gg;

	for (gg = 0; n > 0; gg++, n--)
	{
		s[gg] = b;
	}
	return (s);
}
