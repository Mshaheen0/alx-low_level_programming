#include <unistd.h>
/**
 * _putchar - writes the charecter c
 * @c: the char to print
 *
 * Return: on success 1.
 * on erorr, -1 is returned
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
