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
	int len = strlen(str), i;

	p = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (p == 0)
                return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
