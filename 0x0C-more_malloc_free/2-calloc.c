#include "main.h"
<<<<<<< HEAD

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		s = malloc(nmemb * size);
		if (s == NULL)
			return (NULL);
		memset(s, 0, nmemb * size);
		return (s);
	}
=======
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
>>>>>>> 45ce46ea3744be0c357d9c9b9c3006d7e4f6c83c
}
