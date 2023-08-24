#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery point
 * Descrition: This program will assign a random number to the variable n
 * each time it is executed
 * Return: always 0 (successful)
 */
int main(void)
{
	int n;
	int s=(n % 10);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, s);
		if (s > 5)
			printf("and is greater than 5");
		else
			if (s = 0)
			printf("and is 0");
			else
			printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
