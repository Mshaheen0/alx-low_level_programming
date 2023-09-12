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
	int x = atoi(argv[argc - 1]);
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	if (x >= 25)
	{
		sum += x / 25;
		x = x % 25;
	}
	if (x >= 10)
	{
		sum += x / 10;
		x = x % 10;
	}
	if (x >= 5)
	{
		sum += x / 5;
		x = x % 5;
	}
	if (x >= 2)
	{
		sum += x / 2;
		x = x % 2;
	}
	if (x == 1)
		sum += 1;
	printf("%d\n", sum);
	return (0);
}
