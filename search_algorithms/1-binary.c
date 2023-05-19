#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: First element to print
 * @right: Last elemento to print
*/
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 *                "Binary search algorithm"
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to seach for
 *
 * Return: the index where value is located, -1 if is not present or if the
 *         array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
