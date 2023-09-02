#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array that to be printed
 * @n: the number of prints
 */
void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		printf("%d", *(a + c));
		if (c != n - 1)
			printf(", ");
		c++;
	}
	printf("\n");
}

