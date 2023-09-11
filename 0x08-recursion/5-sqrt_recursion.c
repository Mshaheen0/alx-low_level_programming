#include "main.h"
int square(int n, int val);
/**
 * _sqrt_recursion - a function that returns the natural sq root of a number.
 * @n: the number.
 * Return: square(n, 1).
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - a function that returns the natural sq root of a number.
 * @n: the number.
 * @val: the value of sq root.
 * Return: val if val * val = n, square (n, val + 1) if val * val < n,
 * else return -1.
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
