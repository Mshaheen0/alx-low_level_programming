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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e')
			ch++;
		else
			putchar(ch);
			ch++;
	}
	printf("\n");
	return (0);
}
