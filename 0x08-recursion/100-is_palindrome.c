#include "main.h"
int strleng(char *s);
int is_equal(char *s, int i, int j, int len);
/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: the string to be checked.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int length = strleng(s);
	int j = length - 1;

	return (is_equal(s, 0, j, length));
}
/**
 * strleng - a function that count the string length.
 * @s: the string to be counted.
 * Return: 1 + strlength(s + 1).
 */
int strleng(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strleng(s + 1));
}
/**
 * is_equal - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: the string to be checked.
 * @i: the number of the charechter 1.
 * @j: the number of charchter 2.
 * @len: the length of the stirng.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_equal(char *s, int i, int j, int len)
{
	if (i > len / 2)
		return (1);
	else if (s[i] == '\0')
		return (0);
	else if (s[i] == s[j])
		return (is_equal(s, i + 1, j - 1, len));
	else
		return (0);
}

