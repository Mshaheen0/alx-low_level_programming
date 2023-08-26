#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the int that it's last digit should return.
 * Return: always int mod.
 */
int print_last_digit(int n)
{
	int mod = n % 10;

	_putchar(mod);
	return (mod);
}
