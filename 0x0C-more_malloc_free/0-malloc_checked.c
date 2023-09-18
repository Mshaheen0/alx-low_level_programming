#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The size of the memory to allocate
 *
 * Description:
 *  This function allocates a block of memory of size @b bytes using the malloc
 *  function. If malloc fails to allocate memory, the malloc_checked function
 *  will terminate the program with a status value of 98.
 *
 * Return:
 *   On success, a pointer to the allocated memory is returned.
 */
void *malloc_checked(unsigned int b)
{
	int *F;

	F = malloc(b);
	if (F == NULL)
		exit(98);
	else
		return (F);
}
