#include "main.h"
/**
 * argstostr - Concatenates all arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 * Return: A pointer to the concatenated string, or NULL on failure.
 *         Each argument is separated by a newline character.
 */
char *argstostr(int ac, char **av)
{
	int total_length, i;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}
	res = (char *)malloc(total_length + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	res[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcat(res, av[i]);
			strcat(res, "\n");
		}
	}
	return (res);
}

