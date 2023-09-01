#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @n: string
 * Return: int len.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len, *s != '\0'; s++)
		len++;
	return (len);
}
