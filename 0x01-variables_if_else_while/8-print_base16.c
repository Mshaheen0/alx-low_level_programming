#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery point
 * Descrition: a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: always 0 (successful)
 */
int main(void)
{
	char ch = '0';
	char x = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (x < 'g')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
