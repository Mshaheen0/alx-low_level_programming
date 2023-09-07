#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: the destination of string
 * @src: the source string
 * @n: the size of the string to be concatented.
 * Return: the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int c2 = 0;

	while (dest[c])
		c++;
	for (; src[n] && n > 0; n--)
	{
		dest[c++] = src[c2];
		c2++;
	}
	return (dest);
}

