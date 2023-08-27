#include "main.h"
/**
 * main - entry point
 * Description: a program that finds and prints the sum of the even-valued
 * terms, not exceed 4,000,000, followed by a new line.
 * Return: always 0 (succes)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;

	}
	printf("%.0f\n", total_sum);
	return (0);
}
