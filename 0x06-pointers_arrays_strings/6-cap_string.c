#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the string
 * Return: always str.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i - 1] == ' ') || (str[i - 1] == '	') ||
				(str[i - 1] == '\n') || (str[i - 1] == ',') ||
				(str[i - 1] == ';') || (str[i - 1] == '.') ||
				(str[i - 1] == '!') || (str[i - 1] == '?') ||
				(str[i - 1] == '"') || (str[i - 1] == '(') ||
				(str[i - 1] == ')') || (str[i - 1] == '{') ||
				(str[i - 1] == '}'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
