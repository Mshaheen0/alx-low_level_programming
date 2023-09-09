#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}
