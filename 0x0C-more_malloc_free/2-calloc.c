#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: the number of elements.
 * @size: the size of one element by bytes.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		return (malloc(nmemb * size));
}
