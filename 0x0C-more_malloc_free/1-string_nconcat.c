#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, res_len;
	char *res;

	len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	if (n >= len2)
		res_len = len1 + len2;
	else
		res_len = len1 + n;
	res = malloc(res_len + 1);
	if (res == NULL)
		return (NULL);
	strcpy(res, s1);
	if (n >= len2)
		strcat(res, s2);
	else
		strncat(res, s2, n);
	return (res);
}
