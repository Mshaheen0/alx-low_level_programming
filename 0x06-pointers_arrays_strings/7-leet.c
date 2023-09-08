#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @c: the string
 * Return: cp
 */
char *leet(char *c)
{
	char *cp = c;
	int i;
	char let[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	while (*c)
	{
		for (i = 0; let[i]; i++)
		{
			if (*c == let[i] || *c == let[i] + 32)
				*c = num[i];
		}
		c++;
	}
	return (cp);
}
