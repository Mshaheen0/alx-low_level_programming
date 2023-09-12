#include <stdio.h>
/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: the array of argument's string.
 * Return: always 0 .
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argc;
	(void)argv;
	return (0);
}
