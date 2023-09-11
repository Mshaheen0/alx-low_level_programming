#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: the charecter to be checked.
 * Return: return 1 if true, 0 if false.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
