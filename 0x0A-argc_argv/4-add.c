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
	int sum = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (--argc; argc > 0; argc--)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	(void)argc;
	(void)argv;
	return (0);
}
