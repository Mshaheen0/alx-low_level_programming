#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 *
 * @min: the minimum number.
 * @max: the maximum number.
 *
 *Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int range = max - min + 1, i;

	if (min > max)
		return (NULL);
	arr  = malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
