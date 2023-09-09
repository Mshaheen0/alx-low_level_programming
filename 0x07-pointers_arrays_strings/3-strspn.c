#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string.
 * @accept: the prefix.
 * Return: u - sum;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, sum = 0, n = 0, u = 0, r;

	while (s[u])
		u++;
	while (s[n] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[n] == accept[i])
			{
				sum = sum + 1;
			}
			i++;
		}
		n++;
	}
	r = u - sum;
	return (r);
}
