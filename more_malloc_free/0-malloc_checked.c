#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: variable for reserve bits
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == 0)
		exit(98);
	return (m);
}
