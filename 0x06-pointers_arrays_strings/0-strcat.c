#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: the destination of string
 * @src: the source string
 * Return: the destination.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int n = 0;

	while (dest[c])
		c++;
	for (n = 0; src[n]; n++)
		dest[c++] = src[n];
	return (dest);
}

