#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 *
 * Return: null if size is equal 0
 * return a pointer to the arrar, or null id ir fils
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (0);
	}
	a = malloc(sizeof(char) * size);

	if (a == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
