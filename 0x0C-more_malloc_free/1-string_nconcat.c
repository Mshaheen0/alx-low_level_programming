#include "main.h"
/**
 * string_nconcat - Concatenates two strings, using at most n bytes
 * of the second string and allocates memory for the result.
 *
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, res_len;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
		len1 = 0;
	}
	else
		len1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
		len2 = 0;
	}
	else
		len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	res_len = len1 + n;
	res = malloc(res_len + 1);
	if (res == NULL)
		return (NULL);
	strcpy(res, s1);
	if (n >= len2)
		strcat(res, s2);
	else
		strncat(res, s2, n);
	res[res_len] = '\0';
	return (res);
}
