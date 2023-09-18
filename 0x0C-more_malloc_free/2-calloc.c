#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: the number of elements of the array.
 * @size: the size of single element of array.
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(nmemb * size);
		if (s == NULL)
			return (NULL);
		memset(s, 0, nmemb * size);
		return (s);
	}
}
