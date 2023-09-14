#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 * Return: pointer p.
 */
char *_strdup(char *str)
{
	char *p;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	for (; str[len] != '\0'; len++)
		;
	p = malloc(len + 1);
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
