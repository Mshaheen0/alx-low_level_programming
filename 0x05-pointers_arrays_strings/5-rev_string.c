#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, c;
	char *begin, *end, temp;

	begin  = s;
	end    = s;

	while (*(s + len) != '\0')
		len++;
	for (c = 0; c < len - 1; c++)
		end++;
	for (c = 0; c < len / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
