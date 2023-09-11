#include "main.h"
int prime(int n, int div);
/**
 * is_prime_number - a function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: the number to be checked.
 * Return:  returns 1 if the integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if ((n % 2) == 0)
		return (0);
	if (prime(n, 3) == n)
		return (1);
	else
		return (0);
}
/**
 * prime - a function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: the number to be checked.
 * @div: the divider.
 * Return:  returns 1 if the integer is a prime number, otherwise return 0.
 */
int prime(int n, int div)
{
	if (n % div == 0)
		return (div);
	else
		return (prime(n, div + 2));
}
