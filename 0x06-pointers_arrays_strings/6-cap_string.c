#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the string
 * Return: always str.
 */
char *cap_string(char *str)
{
	int i = 0;

	do {
		i++;
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			continue;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			continue;
		else if ((str[i - 1] >= '0' && str[i - 1] <= '9') || str[i - 1] == 45)
			continue;
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	} while (str[i]);
	return (str);
}
