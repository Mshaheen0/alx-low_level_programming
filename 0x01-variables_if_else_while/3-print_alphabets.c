#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery point
 * Descrition: a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: always 0 (successful)
 */
int main(void)
{
	char ch = 'a';
	char cu = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cu <= 'Z')
	{
		putchar(cu);
		cu++;
	}
	printf("\n");
	return (0);
}
