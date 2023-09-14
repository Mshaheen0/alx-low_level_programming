#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: the 1st string.
 * @s2: the second string.
 * Return: ptr.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, k;
	char *ptr;
	int l1 = strlen(s1), l2 = strlen(s2);

	k = l1 + l2;
	ptr = malloc(k + 1);
	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < k; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	return (ptr);

}
