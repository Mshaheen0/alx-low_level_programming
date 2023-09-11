#include "main.h"
/**
 * _strstr - a function that gets the length of a prefix substring.
 * @haystack: the string.
 * @needle: the word.
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					continue;
				else
					break;
			}
		}
		if (j == 5)
			return (haystack + i);
	}
	return ('\0');
}
