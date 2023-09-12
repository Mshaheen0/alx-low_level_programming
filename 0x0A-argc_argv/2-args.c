#include <stdio.h>
/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: the array of argument's string.
 * Return: always 0 .
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;
	return (0);
}
