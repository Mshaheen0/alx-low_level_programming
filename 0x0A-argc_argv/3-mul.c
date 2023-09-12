#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: the array of argument's string.
 * Return: always 0 .
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	(void)argc;
	(void)argv;
	return (0);
}
