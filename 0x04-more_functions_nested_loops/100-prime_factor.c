#include <stdio.h>
/**
 * main - entry point
 * Description: a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: always 0;
 */
int main(void)
{
	long int n = 612852475143;
	int i;

	while (n % 2 == 0)
	{
		printf("%d, ", 2);
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d, ", i);
			n = n / i;
		}
	}
	if (n > 2)
		printf("%ld ", n);
	printf("\n");
	return (0);
}

