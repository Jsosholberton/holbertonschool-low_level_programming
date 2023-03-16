#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: value min
 * @max: value max
 *
 * Return: if min > max, return 0, if malloc fails return 0
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (0);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		*(arr + i) = min + i;
	}
	return (arr);
}
