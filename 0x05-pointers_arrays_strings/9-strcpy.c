#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int c = 0;

	while (src[len] != '\0')
		len++;
	len++;
	while (c <= len)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
