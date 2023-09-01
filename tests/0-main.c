#include <stdio.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 98;
int *p = &n;

*p = 402;

printf(" %d \n", n);
return (0);
}