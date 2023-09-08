#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array.
 * @n: the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i = n;
	int begin = 0, end = n - 1, tmp;

	while (begin < i / 2)
	{
		tmp = a[end];
		a[end] = a[begin];
		a[begin] = tmp;
		end--;
		begin++;
	}
}

