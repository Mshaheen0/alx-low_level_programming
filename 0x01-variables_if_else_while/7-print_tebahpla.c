#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery point
 * Descrition: a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: always 0 (successful)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	printf("\n");
	return (0);
}
