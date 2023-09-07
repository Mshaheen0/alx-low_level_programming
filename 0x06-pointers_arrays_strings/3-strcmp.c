#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: the first parameter
 * @s2: the second parameter
 * Return: always cmp
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = *s1 - *s2;

	return (cmp);
}
