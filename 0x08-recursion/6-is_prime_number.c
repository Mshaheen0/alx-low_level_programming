#include "main.h"
int prime(int n, int div);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if ((n % 2) == 0)
		return (0);
	else
	{
		if (prime(n, 3) == n)
			return (1);
		else
			return (0);
	}

}
int prime(int n, int div)
{
	if (n % div == 0)
		return (div);
	else
		return (prime(n, div + 2));
}
