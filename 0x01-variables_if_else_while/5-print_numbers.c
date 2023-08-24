#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery point
 * Descrition: a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: always 0 (successful)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
