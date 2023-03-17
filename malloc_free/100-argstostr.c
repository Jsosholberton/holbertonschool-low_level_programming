#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int arg, size_1, index = 0, size_2 = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (size_1 = 0; av[arg][size_1]; size_1++)
		{
			size_2++;
		}
	}

	result = malloc((size_2 * sizeof(char)) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (size_1 = 0; av[arg][size_1]; size_1++)
		{
			result[index++] = av[arg][size_1];
		}
		result[index++] = '\n';
	}

	result[size_2] = '\0';

	return (result);
}
