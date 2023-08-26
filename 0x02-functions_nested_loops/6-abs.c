#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 * @a: the int that will converted
 * Return: always return int a
 */
int _abs(int a)
{
	if (a < 0)
		a = (-1) * a;
	return (a);
}
