#include "main.h"
/**
 * _isupper -  a function that checks for uppercase character.
 * @c: charecter to be cheched.
 * Return: return 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c > '64' && c < '91')
		return (1);
	else
		return (0);
}
