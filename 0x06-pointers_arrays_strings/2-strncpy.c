#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: the destination of string.
 * @src: the source string.
 * @n: the size of the string to be copied.
 * Return: the destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; src[c] != '\0' && c < n; c++)
		dest[c] = src[c];
	for ( ; c < n; c++)
		dest[c] = '\0';
	return (dest);
}

