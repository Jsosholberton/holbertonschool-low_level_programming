#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: if nmemb or size is 0, then _calloc returns NULL
 * @size: f nmemb or size is 0, then _calloc returns NULL
 *
 * Return: return 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (0);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
