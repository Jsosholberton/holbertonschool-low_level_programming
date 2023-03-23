#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: number of elements on array
 * @cmp: pointer to funtion
 *
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
