#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 * Return: pointer p.
 */
char *_strdup(char *str)
{
	char *p;
	int len = strlen(str), i;

	p = malloc(len);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
