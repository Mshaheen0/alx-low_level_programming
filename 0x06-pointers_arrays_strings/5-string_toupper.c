#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: the string
 * Return: always s.
 */
char *string_toupper(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;
		n++;
	}
	return (s);
}

