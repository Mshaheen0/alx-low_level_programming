#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the charecter
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int f = 0;

	while (*s && f == 0)
	{
		if (*s == c)
		{
			f = 1;
			break;
		}
		i++;
		s++;
	}
	if (f == 0)
		return (NULL);
	return (s);
}
