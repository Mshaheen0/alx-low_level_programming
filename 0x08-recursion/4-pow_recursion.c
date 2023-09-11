#include "main.h"
/**
 *  _pow_recursion - a function that returns the value of x raised to
 *  the power of y.
 *  @x: the number.
 *  @y: the power.
 *  Return: -1 if power is negative, 1 if power is 0, x if power is 1,
 *  x * _pow_recursion(x, y - 1)) else.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x *  _pow_recursion(x, y - 1));
}
