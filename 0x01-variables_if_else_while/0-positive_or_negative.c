#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This program will assign a random number to the variable n
 * each time it is executed
 * Return: always 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
		if (n == 0)
			printf("is zero");
		else if (n > 0)
			printf("is positive");
		else
			printf("is negative");
	printf("\n");
	return (0);
}
