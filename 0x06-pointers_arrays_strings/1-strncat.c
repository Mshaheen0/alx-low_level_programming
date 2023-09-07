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
	int c2;

	while (dest[c])
		c++;
	for (c2 = 0; src[c2] != '\0' && c2 < n; c2++)
	{
		dest[c + c2] = src[c2];
	}
	dest[c + c2] = '\0';
	return (dest);
}

