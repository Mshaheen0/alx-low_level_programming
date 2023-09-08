#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @c: the string.
 * Return: cp
 */
char *rot13(char *c)
{
	int i;
	char *cp = c;
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char yrg[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*c)
	{
		for (i = 0; i < 52; i++)
		{
			if (*c == let[i])
			{
				*c = yrg[i];
				break;
			}
		}
		c++;
	}

	return (cp);
}
