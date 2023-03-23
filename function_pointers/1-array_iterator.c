#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array to print
 * @size: size of array
 * @action: pointer to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL)
		return;
	if (action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
